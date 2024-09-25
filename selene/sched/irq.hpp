#pragma once
#include <array>
#include <memory>
#include "../utility/apic.hpp"

namespace scheduler
{
	// Task index type and allocator.
	//
	struct task;
	void dereference_task( task* ts, uint8_t n = 1 );

	using task_id = uint8_t;
	static constexpr task_id null_task = 0;
	struct task_ref
	{
		task* pointer = nullptr;
		
		// Construction of a task reference.
		//
		task_ref() noexcept : pointer( nullptr ) {}
		explicit task_ref( task* ptr ) noexcept : pointer( ptr ) {}

		// No copy, move by swap.
		//
		task_ref( const task_ref& o ) = delete;
		task_ref& operator=( const task_ref& ) = delete;
		task_ref( task_ref&& o ) noexcept : pointer( std::exchange( o.pointer, nullptr ) ) {};
		task_ref& operator=( task_ref&& o ) noexcept
		{
			std::swap( pointer, o.pointer );
			return *this;
		}

		// Decay to pointer and bool.
		//
		task* operator->() const { return pointer; }
		explicit operator bool() const { return pointer != nullptr; }

		// Dereference on destruction.
		//
		task* release() { return std::exchange( pointer, nullptr ); }
		void reset()
		{
			if ( auto p = release() )
				dereference_task( p );
		}
		~task_ref()
		{
			reset();
		}

	};
	task_ref allocate_task();

	// Task scheduling types.
	//
	using shorthand = apic::shorthand;
	enum class priority
	{
		dpc =     0,
		ipi =     1,
		nmi =     2,
		max =     3,
	};

	// Descriptor for a scheduled task.
	//
	struct task
	{
		using fn_callback = void(*)( void* context );

		// Singly linked lists for each CPU.
		//
		task_id prev[ apic::max_processor_count ] = { null_task };

		// The scheduled task details.
		//
		void* context = nullptr;
		fn_callback callback = nullptr;
		fn_callback rundown_callback = nullptr;

		// Spare space for the lambda.
		//
		char spare_data[ 64 ] = { 0 };

		// Number of pending tasks / task links.
		//
		std::atomic<uint8_t> pending_count = 0;
		std::atomic<uint8_t> reference_count = 0;
		uint8_t threshold = 0;

		// Returns whether or not task is done.
		//
		FORCE_INLINE bool is_complete() const
		{
			return pending_count <= threshold;
		}

		// Waits for the task to be complete.
		//
		FORCE_INLINE void wait() const
		{
			while ( !is_complete() )
				yield_cpu();
		}

		// Waits for the task to have no external references.
		//
		FORCE_INLINE void wait_for_deref() const
		{
			while ( reference_count.load( std::memory_order::relaxed ) != 1 )
				yield_cpu();
		}
	};
	static_assert( !( sizeof( task ) % 0x20 ), "Task structure is misaligned." );

	// Queues a task.
	//
	void queue( const task_ref& ts, priority prio, shorthand sh, uint32_t pcid, bool one_shot );

	// Creates a task from a lambda.
	// - i variant stores the data inline in the task structure, avoiding allocation.
	// - h variant stores the data on heap.
	//
	template<typename T>
	inline task_ref create_itask( T&& fn )
	{
		using F = std::decay_t<T>;
		static_assert( sizeof( F ) <= sizeof( task::spare_data ) );

		auto tref = allocate_task();
		new ( &tref->spare_data ) F( std::forward<T>( fn ) );
		tref->context = &tref->spare_data[ 0 ];
		if constexpr ( std::is_trivially_destructible_v<F> )
			tref->rundown_callback = nullptr;
		else
			tref->rundown_callback = [ ] ( void* ctx ) { std::destroy_at( ( F* ) ctx ); };
		tref->callback = [ ] ( void* ctx ) { ( *( ( F* ) ctx ) )( ); };
		return tref;
	}
	template<typename T>
	inline task_ref create_htask( T&& fn )
	{
		using F = std::decay_t<T>;

		auto tref = allocate_task();
		tref->context = new F( std::forward<T>( fn ) );
		tref->rundown_callback = [ ] ( void* ctx ) { delete ( ( F* ) ctx ); };
		tref->callback = [ ] ( void* ctx ) { ( *( ( F* ) ctx ) )( ); };
		return tref;
	}
	template<typename T, bool IsInline = (sizeof( std::decay_t<T> ) <= sizeof( task::spare_data ))> /*here for visibility, don't set*/
	inline task_ref create_task( T&& fn )
	{
		if constexpr ( IsInline )
			return create_itask( std::forward<T>( fn ) );
		else
			return create_htask( std::forward<T>( fn ) );
	}

	// Queues a lambda task on stack and waits for it to finish before returning.
	//
	template<typename T>
	FLATTEN void queue_blocking( T&& fn, priority prio, shorthand sh, uint32_t pcid = 0, bool one_shot = false )
	{
		task_ref tref = allocate_task();
		tref->context = &fn;
		tref->rundown_callback = nullptr;
		tref->callback = [ ] ( void* ctx ) { ( *( ( decltype( &fn ) ) ctx ) )( ); };
		queue( tref, prio, sh, pcid, one_shot );
		tref->wait_for_deref();
	}

	// Queues a lambda task and returns a reference to it.
	//
	template<typename T>
	FLATTEN task_ref queue_async( T&& fn, priority prio, shorthand sh, uint32_t pcid = 0, bool one_shot = false )
	{
		task_ref tref = create_task<T>( std::forward<T>( fn ) );
		queue( tref, prio, sh, pcid, one_shot );
		return tref;
	}

	// Barrier.
	//
	struct barrier;
	template<typename F>
	concept GenericCallable = 
		xstd::InvocableWith<F, barrier*, bool> ||
		xstd::InvocableWith<F, barrier*> ||
		xstd::InvocableWith<F>;
	struct barrier {
		std::atomic<uint16_t> latch_up =   0;
		std::atomic<uint16_t> latch_down = 0;
		void* const           id;

		template<GenericCallable F>
		FORCE_INLINE constexpr barrier( F* fn, uint16_t n = ( uint16_t ) apic::number_of_processors() )
			: latch_up( n ), latch_down( n ), id( ( void* ) fn ) {}

		template<typename T>
		FORCE_INLINE void call( bool master ) {
			using F = decltype( *std::declval<T>() );
			if constexpr ( xstd::InvocableWith<F> )                ( *( T ) id )();
			else if constexpr ( xstd::InvocableWith<F, barrier*> ) ( *( T ) id )( this );
			else                                                   ( *( T ) id )( this, master );
		}

		static FORCE_INLINE void wait_for( std::atomic<uint16_t>& latch ) {
			auto result = --latch;
			while ( result != 0 ) {
				yield_cpu();
				result = latch.load( std::memory_order::relaxed );
			}
		}
		FORCE_INLINE void up() { wait_for( latch_up ); }
		FORCE_INLINE void down() { wait_for( latch_down ); }
	};

	// Shorthands for common operations.
	//
	template<GenericCallable T>
	FORCE_INLINE void call_ipi( T&& fn ) {
		task_ref tref = allocate_task();
		barrier* bar = new ( &tref->spare_data[ 0 ] ) barrier{ &fn };
		tref->context = bar;
		tref->rundown_callback = nullptr;
		tref->callback = []( void* data ) FLATTEN { ( ( barrier* ) data )->call<decltype( &fn )>( false ); };
		{
			ia32::scope_irql<IPI_LEVEL> _i{};
			queue( tref, priority::ipi, shorthand::all_but_this, 0, false );
			bar->call<decltype( &fn )>( true );
		}
		tref->wait_for_deref();
	}
	template<GenericCallable T>
	FORCE_INLINE void call_dpc( T&& fn ) {
		task_ref tref = allocate_task();
		barrier* bar = new ( &tref->spare_data[ 0 ] ) barrier{ &fn };
		tref->context = bar;
		tref->rundown_callback = nullptr;
		tref->callback = []( void* data ) FLATTEN { ( ( barrier* ) data )->call<decltype( &fn )>( false ); };
		{
			ia32::scope_irql<DISPATCH_LEVEL> _i{};
			queue( tref, priority::dpc, shorthand::all_but_this, 0, false );
			bar->call<decltype( &fn )>( true );
		}
		tref->wait_for_deref();
	}
	template<typename T>
	FORCE_INLINE void queue_ipi( T&& fn, bool one_shot = false ) {
		queue_async( std::forward<T>( fn ), priority::ipi, one_shot ? shorthand::all_but_this : shorthand::all, 0, one_shot );
	}
	template<typename T>
	FORCE_INLINE void queue_dpc( T&& fn, bool one_shot = false ) {
		queue_async( std::forward<T>( fn ), priority::dpc, one_shot ? shorthand::all_but_this : shorthand::all, 0, one_shot );
	}

	// Freezes KUSER_SHARED_DATA::SystemTime for a given duration.
	//
	void freeze_clock_for( xstd::duration dur );

	// Initializes the scheduler hooks.
	//
	inline bool initialized = false;
	void init();
};