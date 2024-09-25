#pragma once
#include <atomic>
#include <memory>
#include <type_traits>
#include <utility>
#include <xstd/assert.hpp>

#define _REF_SAFE 1

// Implement custom pointers.
//
namespace ref
{
	struct managed_pointer_tag_t {};

	// Control block.
	//
	struct control_block
	{
		union
		{
			mutable std::atomic<uint64_t> _refs = 0;
			struct
			{
				mutable std::atomic<int32_t> strong_refs;
				mutable std::atomic<int32_t> weak_refs;
			};
		};
		mutable void( *destructor )( const void* ) = nullptr;

		bool alive() const { return destructor; }
		void inc_weak_ref() const
		{
			++weak_refs;
		}
		void inc_strong_ref() const
		{
			++strong_refs;
		}
		void dec_weak_ref() const
		{
			if ( !( _refs -= 1ull << 32 ) )
			{
				delete this;
			}
		}
		void dec_strong_ref() const
		{
			if ( !--strong_refs )
			{
				weak_refs++;
				std::exchange( destructor, nullptr )( this );
				if ( !--weak_refs )
					delete this;
			}
		}

		size_t num_strong_refs() const { return strong_refs.load(); }
		size_t num_weak_refs() const { return weak_refs.load(); }
		size_t num_refs() const
		{
			auto value = _refs.load();
			return value + ( value >> 32 );
		}

		control_block() {}
		~control_block() {}
	};
	template<typename T>
	struct managed_object : control_block
	{
		static constexpr uint64_t key = 0x64f358259746d1f5;

		union
		{
			T value;
			char raw[ sizeof( T ) ];
		};

		template<typename... Tx>
		managed_object( Tx&&... args ) : value( std::forward<Tx>( args ) ... )
		{
			destructor = [ ] ( const void* p )
			{
				std::destroy_at( &( ( managed_object<T>* )p )->value );
			};
		}
		~managed_object() { xstd::assert_that( !alive() ); }
	};
	template<typename T>
	struct managed_pointer : managed_pointer_tag_t
	{
		// Pointer traits.
		//
		using element_type = T;

		// Internal storage.
		//
		managed_object<T>* object = nullptr;
		managed_pointer() noexcept {}
		explicit managed_pointer( managed_object<T>* object ) noexcept : object( object ) {}

		// Pointer interface.
		//
		T* get() const noexcept { return alive() ? &object->value : nullptr; }
		T* operator->() const noexcept { return get(); }
		T& operator*() const noexcept { return *get(); }

		// State is checked explicitly, no conversion to bool given.
		//
		bool null() const noexcept { return !object; }
		bool alive() const noexcept { return object && object->alive(); }
		bool dangling() const noexcept { return object && !object->alive(); }

		// Use counters.
		//
		size_t weak_ref_count() const noexcept { return object ? object->num_weak_refs() : 0; };
		size_t strong_ref_count() const noexcept { return object ? object->num_strong_refs() : 0; };
		size_t ref_count() const noexcept { return object ? object->num_refs() : 0; };

		// Implement comparison traits.
		//
		bool operator<( const managed_pointer<T>& o ) const noexcept { return object < o.object; }
		bool operator<( const T* o ) const noexcept { return ( object ? &object->value : nullptr ) < o; }
		bool operator<( std::nullptr_t ) const noexcept { return false; }

		bool operator==( const managed_pointer<T>& o ) const noexcept { return object == o.object; }
		bool operator==( const T* o ) const noexcept { return ( object ? &object->value : nullptr ) == o; }
		bool operator==( std::nullptr_t ) const noexcept { return object == nullptr; }

		bool operator!=( const managed_pointer<T>& o ) const noexcept { return object != o.object; }
		bool operator!=( const T* o ) const noexcept { return ( object ? &object->value : nullptr ) != o; }
		bool operator!=( std::nullptr_t ) const noexcept { return object != nullptr; }
	};

	// Pointer types.
	//
	template<typename T>
	struct strong_ptr : managed_pointer<T>
	{
		// Internal and default constructors.
		//
		constexpr strong_ptr() noexcept {}
		constexpr strong_ptr( std::nullptr_t ) noexcept {}
		explicit strong_ptr( managed_object<T>* object ) noexcept : managed_pointer<T>( object ) {}

		// Implement ownership traits.
		//
		strong_ptr( strong_ptr&& o ) noexcept : managed_pointer<T>( std::exchange( o.object, nullptr ) ) {}
		strong_ptr( const strong_ptr& o ) : managed_pointer<T>( o.object )
		{
			if ( this->object )
				this->object->inc_strong_ref();
		}
		strong_ptr& operator=( strong_ptr&& o ) noexcept
		{
			std::swap( o.object, this->object );
			return *this;
		}
		strong_ptr& operator=( const strong_ptr& o )
		{
			if ( this->object )
				this->object->dec_strong_ref();
			this->object = o.object;
			if ( this->object )
				this->object->inc_strong_ref();
			return *this;
		}
		~strong_ptr()
		{
			if ( this->object )
				this->object->dec_strong_ref();
		}

		// Inherit pointer traits.
		//
		using managed_pointer<T>::operator*;
		using managed_pointer<T>::operator->;
		//using managed_pointer<T>::operator<;
		//using managed_pointer<T>::operator==;
		//using managed_pointer<T>::operator!=;

		// Implement conversion to bool.
		//
		explicit operator bool() const noexcept { return !this->null(); }
	};
	template<typename T>
	struct weak_ptr : managed_pointer<T>
	{
		// Internal and default constructors.
		//
		constexpr weak_ptr() noexcept {}
		constexpr weak_ptr( std::nullptr_t ) noexcept {}
		explicit weak_ptr( managed_object<T>* object ) noexcept : managed_pointer<T>( object ) {}

		// Construct from strong.
		//
		weak_ptr( const strong_ptr<T>& p ) noexcept : managed_pointer<T>( p.object )
		{
			if ( this->object )
				this->object->inc_weak_ref();
		}

		// Convert into strong.
		//
		strong_ptr<T> lock() const
		{
			if ( !this->alive() ) return nullptr;
			this->object->inc_strong_ref();
			return strong_ptr<T>{ this->object };
		}

		// Implement ownership traits.
		//
		weak_ptr( weak_ptr&& o ) noexcept : managed_pointer<T>( std::exchange( o.object, nullptr ) ) {}
		weak_ptr( const weak_ptr& o ) : managed_pointer<T>( o.object )
		{
			if ( this->object )
				this->object->inc_weak_ref();
		}
		weak_ptr& operator=( weak_ptr&& o ) noexcept
		{
			std::swap( o.object, this->object );
			return *this;
		}
		weak_ptr& operator=( const weak_ptr& o )
		{
			if ( this->object )
				this->object->dec_weak_ref();
			this->object = o.object;
			if ( this->object )
				this->object->inc_weak_ref();
			return *this;
		}
		~weak_ptr()
		{
			if ( this->object )
				this->object->dec_weak_ref();
		}

		// Inherit pointer traits.
		//
		using managed_pointer<T>::operator*;
		using managed_pointer<T>::operator->;
		//using managed_pointer<T>::operator<;
		//using managed_pointer<T>::operator==;
		//using managed_pointer<T>::operator!=;
	};

	// Helpful concepts.
	//
	template<typename T>
	concept ManagedPointer = std::is_base_of_v<managed_pointer_tag_t, T>;

	// Basic allocator.
	//
	template<typename T, typename... Tx>
	static strong_ptr<T> allocate( Tx&&... args )
	{
		auto* obj = new managed_object<T>( std::forward<Tx>( args )... );
		obj->strong_refs = 1;
		return strong_ptr<T>{ obj };
	}
};

// Implement hasher.
//
namespace std
{
	template<ref::ManagedPointer T>
	struct hash<T>
	{
		size_t operator()( const T& value ) const noexcept
		{
			size_t identifier = ( ( size_t ) value.object ) & ( ( 1ull << 48 ) - 1 );
			return ( identifier << 16 ) ^ ( identifier );
		}
	};
};