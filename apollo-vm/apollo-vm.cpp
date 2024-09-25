// Disable CRT version broadcasting.
//
#ifndef MUST_MATCH
	#define MUST_MATCH(x) 
#endif

#include <stdint.h>
#include <xstd/intrinsics.hpp>
#include <xstd/random.hpp>
#include <wasm/vm.hpp>
#include <apollo/vm_impl.hpp>

// WebAssembly types.
//
using i8 =   uint8_t;
using i8s =  int8_t;
using i8u =  uint8_t;

using i16 =  uint16_t;
using i16s = int16_t;
using i16u = uint16_t;

using i32 =  uint32_t;
using i32s = int32_t;
using i32u = uint32_t;

using i64 =  uint64_t;
using i64s = int64_t;
using i64u = uint64_t;

using f32 =  float;
using f64 =  double;

// Virtual machine configuration.
//
static constexpr auto rand_key = xstd::make_crandom_n<int32_t, 2>( 0xddd );
#ifdef VM_DEBUG
	template<uint32_t Key>
	FORCE_INLINE static uint64_t decrypt_u64( uint64_t value )
	{
		return value;
	}
	template<uint32_t Key>
	FORCE_INLINE static uint64_t encrypt_u64( uint64_t value )
	{
		return value;
	}
#else
	template<int32_t Key>
	FORCE_INLINE static constexpr uint64_t decrypt_u64( uint64_t value )
	{
		return value + Key;
	}
	template<int32_t Key>
	FORCE_INLINE static constexpr uint64_t encrypt_u64( uint64_t value )
	{
		return value - Key;
	}
#endif
	
// Encrypted trivial-type storage for the virtual machine.
//
template<typename T>
concept HasUnderlying = requires { typename T::underlying_type; };
template<typename T, typename = void>
struct underlying { using type = T; };
template<HasUnderlying T>
struct underlying<T, void> { using type = typename T::underlying_type; };
template<xstd::Enum T>
struct underlying<T, void> { using type = std::underlying_type_t<T>; };
template<typename T>
using underlying_t = typename underlying<T>::type;

template<typename T, int32_t Key>
struct encrypted
{
	using underlying_type = T;

	T value = T( encrypt_u64<Key>( 0 ) );

	FORCE_INLINE T get() const { return T( decrypt_u64<Key>( uint64_t( value ) ) ); }
	FORCE_INLINE void set( T v ) { value = T( encrypt_u64<Key>( uint64_t( v ) ) ); }

	FORCE_INLINE operator T() const { return get(); }
	FORCE_INLINE T operator=( T v ) { set( v ); return v; }
	FORCE_INLINE T operator++() { T v = get(); set( ++v ); return v; }
	FORCE_INLINE T operator--() { T v = get(); set( --v  ); return v; }
	FORCE_INLINE T operator++( int ) { T v = get(); set( v + 1 ); return v; }
	FORCE_INLINE T operator--( int ) { T v = get(); set( v - 1 ); return v; }

#define DEFINE_OP( O, OX )																                                      \
	template<typename Ty> FORCE_INLINE auto operator OX( Ty d ) { auto v = get() O underlying_t<Ty>(d); set( v ); return v; } \
	template<typename Ty> FORCE_INLINE auto operator O( Ty d ) const { return get() O underlying_t<Ty>(d); }					 
#define DEFINE_CMP( O ) template<typename Ty> FORCE_INLINE auto operator O( Ty d ) const { return get() O underlying_t<Ty>( d ); }

	DEFINE_CMP( <= );
	DEFINE_CMP( < );
	DEFINE_CMP( == );
	DEFINE_CMP( != );
	DEFINE_CMP( > );
	DEFINE_CMP( >= );

	DEFINE_OP( +, += );
	DEFINE_OP( -, -= );
	DEFINE_OP( <<, <<= );
	DEFINE_OP( >>, >>= );
	DEFINE_OP( &, &= );
	DEFINE_OP( |, |= );
	DEFINE_OP( ^, ^= );
	DEFINE_OP( *, *= );
	DEFINE_OP( /, /= );
	DEFINE_OP( %, %= );
};

// Define the VM context.
//
#pragma pack(push, 1)
struct vm_context
{
	using fn_vm_handler = uint64_t( __cdecl* )( vm_context* vm, uint64_t key );
	
#if __VM_SAFE_STACK
	uint32_t num_locals;
#endif
	encrypted<uint64_t*, rand_key[ 0 ]>     ip;
	encrypted<uint64_t,   rand_key[ 1 ]>    sp_delta;
	uint64_t                                memory[];

	template<typename T>
	FORCE_INLINE T pop_ip( uint64_t& key )
	{
		uint64_t rkey = apollo::vm::stream_keys[ key++ % ( 64 / 8 ) ];
		uint64_t dec = rkey + *ip++;
		return *( T* ) &dec;
	}
	FORCE_INLINE void initialize( uint64_t* start_ip, size_t num_stack, size_t num_locals )
	{
#if __VM_SAFE_STACK
		num_local = num_locals;
#endif
		ip = start_ip;
		set_sp( &memory[ num_stack + num_locals ] );
	}
	FORCE_INLINE uint64_t next( uint64_t key )
	{
		return pop_ip<fn_vm_handler>( key )( this, key );
	}
	FORCE_INLINE void forward( int64_t delta, uint64_t& key )
	{
		ip += delta;
		key += delta;
	}

	FORCE_INLINE void stack_probe( uint32_t count )
	{
#if __VM_SAFE_STACK
		if ( sp_delta < ( count + num_locals ) ) [[unlikely]]
			__int2c();
#endif
	}
	template<typename T = uint64_t>
	FORCE_INLINE void push_stack( T value )
	{
		stack_probe( 1 );
		memory[ --sp_delta ] = ( uint64_t ) *( xstd::convert_uint_t<T>* ) &value;
	}
	FORCE_INLINE uint64_t& peek_stack()
	{
		return memory[ sp_delta ];
	}
	template<typename T = uint64_t>
	FORCE_INLINE T pop_stack()
	{
		uint64_t v = memory[ sp_delta++ ];
		return *( T* ) &v;
	}
	FORCE_INLINE void set_sp( uint64_t* nsp )
	{
		sp_delta = nsp - memory;
		stack_probe( 0 );
	}
};
#pragma pack(pop)

// VM entry / exit.
//
extern "C" [[gnu::always_inline, gnu::nodebug]] uint64_t __wasm_vmenter( uint64_t* args, uint64_t stack_ext, uint64_t arg_cnt, uint64_t local_cnt, uint64_t ip, uint64_t key )
{
	if ( stack_ext < ( 2_kb / 8 ) ) stack_ext = 2_kb / 8;
	stack_ext += 0x100;

	size_t total_local_count = arg_cnt + local_cnt;
	size_t memory_size = ( total_local_count + stack_ext ) * sizeof( uint64_t );
		
	vm_context* ctx;
	bool heap_allocated = memory_size >= 16_kb;
	if ( heap_allocated )
		ctx = ( vm_context* ) malloc( sizeof( vm_context ) + memory_size );
	else
		ctx = ( vm_context* ) _alloca( sizeof( vm_context ) + memory_size );

#if __VM_SAFE_STACK
	ctx->num_locals = total_local_count;
#endif
	ctx->initialize( ( uint64_t* ) ip, stack_ext, total_local_count );

	auto p = ctx->memory;
	while ( arg_cnt-- )
		*p++ = *args++;
	while ( local_cnt-- )
		*p++ = 0;
	uint64_t result = ctx->next( key );
	if ( heap_allocated ) free( ctx );
	return result;
}

template<size_t N = 16, typename P, typename A, typename... T>
FLATTEN FORCE_INLINE inline uint64_t __wasm_invoke( P&& fn, A&& get_arg, uint32_t num_args, T... n )
{
	if constexpr ( N != 0 )
	{
		if ( num_args )
			return __wasm_invoke<N - 1>( std::forward<P>( fn ), std::forward<A>( get_arg ), num_args - 1, ( uint64_t ) get_arg(), n... );
		else
			return ( ( uint64_t( __cdecl* )( T... ) ) fn )( n... );
	}
	fastfail( 1 );
}

// Control flow.
//
FORCE_INLINE static uint64_t __wasm_br_if( vm_context* ctx, uint64_t key )
{
	int64_t brdelta = ctx->pop_ip<int64_t>( key );
	if ( ctx->pop_stack() )
		ctx->forward( brdelta, key );
	return ctx->next( key );
}
FORCE_INLINE static uint64_t __wasm_br( vm_context* ctx, uint64_t key )
{
	int64_t brdelta = ctx->pop_ip<int64_t>( key );
	ctx->forward( brdelta, key );
	return ctx->next( key );
}
FORCE_INLINE static uint64_t __wasm_return( vm_context* ctx, uint64_t key )
{
	return ctx->peek_stack();
}
[[gnu::always_inline, gnu::flatten]] static uint64_t __wasm_ext_call( vm_context* ctx, uint64_t key, uint64_t aux, uint64_t ptr )
{
	apollo::vm::call_aux aux_info = {};
	aux_info.raw = aux;
	uint64_t result = __wasm_invoke( ptr, [ & ] () FORCE_INLINE{ return ctx->pop_stack(); }, aux_info.num_args );
	if ( aux_info.has_retval ) ctx->push_stack( result );
	return ctx->next( key );
}


// Generic operators.
//
template<typename T, typename P>
FORCE_INLINE static uint64_t __wasm_unary( vm_context* ctx, uint64_t key, P&& op )
{
	ctx->push_stack( op( ctx->pop_stack<T>() ) );
	return ctx->next( key );
}
template<typename T, typename P>
FORCE_INLINE static uint64_t __wasm_binary( vm_context* ctx, uint64_t key, P&& op )
{
	auto v2 = ctx->pop_stack<T>();
	auto v1 = ctx->pop_stack<T>();
	ctx->push_stack( op( v1, v2 ) );
	return ctx->next( key );
}

// Memory.
//
template<typename T>
FORCE_INLINE static uint64_t __wasm_load_const( vm_context* ctx, uint64_t key )
{
	ctx->push_stack<T>( ctx->pop_ip<T>( key ) );
	return ctx->next( key );
}
template<typename T, typename V = T>
FORCE_INLINE static uint64_t __wasm_load( vm_context* ctx, uint64_t key )
{
	ctx->push_stack<T>( *( V* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() ) );
	return ctx->next( key );
}
template<typename T, typename V = T>
FORCE_INLINE static uint64_t __wasm_store( vm_context* ctx, uint64_t key )
{
	*( V* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() ) = ctx->pop_stack<T>();
	return ctx->next( key );
}

// Atomics.
//
template<typename T, typename V = T>
FORCE_INLINE static uint64_t __wasm_atomic_load( vm_context* ctx, uint64_t key )
{
	ctx->push_stack<T>( ( ( std::atomic<V>* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() ) )->load() );
	return ctx->next( key );
}
template<typename T, typename V = T>
FORCE_INLINE static uint64_t __wasm_atomic_store( vm_context* ctx, uint64_t key )
{
	T op1 = ctx->pop_stack<T>();
	( ( std::atomic<V>* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() ) )->store( op1 );
	return ctx->next( key );
}
template<typename T, typename O, typename P>
FORCE_INLINE static uint64_t __wasm_rmw_binary( vm_context* ctx, uint64_t key, P&& op )
{
	O op1 = ctx->pop_stack<O>();
	std::atomic<T>& ref = *( std::atomic<T>* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() );
	ctx->push_stack<T>( op( ref, ( T ) op1 ) );
	return ctx->next( key );
}
template<typename T, typename O, typename P>
FORCE_INLINE static uint64_t __wasm_rmw_ternary( vm_context* ctx, uint64_t key, P&& op )
{
	O op2 = ctx->pop_stack<O>();
	O op1 = ctx->pop_stack<O>();
	std::atomic<T>& ref = *( std::atomic<T>* ) ( ctx->pop_ip<uint64_t>( key ) + ctx->pop_stack() );
	ctx->push_stack<T>( op( ref, ( T ) op1, ( T ) op2 ) );
	return ctx->next( key );
}

// Locals.
//
FORCE_INLINE static uint64_t __wasm_get_local( vm_context* ctx, uint64_t key )
{
	ctx->push_stack( ctx->memory[ ctx->pop_ip<uint64_t>( key ) ] );
	return ctx->next( key );
}
FORCE_INLINE static uint64_t __wasm_set_local( vm_context* ctx, uint64_t key )
{
	ctx->memory[ ctx->pop_ip<uint64_t>( key ) ] = ctx->pop_stack();
	return ctx->next( key );
}
FORCE_INLINE static uint64_t __wasm_tee_local( vm_context* ctx, uint64_t key )
{
	ctx->memory[ ctx->pop_ip<uint64_t>( key ) ] = ctx->peek_stack();
	return ctx->next( key );
}

// Parametrics.
//
FORCE_INLINE static uint64_t __wasm_drop( vm_context* ctx, uint64_t key )
{
	ctx->pop_stack();
	return ctx->next( key );
}
FORCE_INLINE static uint64_t __wasm_select( vm_context* ctx, uint64_t key )
{
	uint32_t c = ctx->pop_stack<uint32_t>();
	uint64_t v[] = { ctx->pop_stack<uint64_t>(), ctx->pop_stack<uint64_t>() };
	ctx->push_stack<uint64_t>( v[ bool( c ) ] );
	return ctx->next( key );
}

// Implement variable bitsize builtins.
//
struct vrotl
{
	template <typename T> 
	FORCE_INLINE auto operator()( T value, T count ) const noexcept
	{
		constexpr size_t N = sizeof( T ) * 8;
		return ( value << count ) | ( value >> ( N - count ) );
	}
};

struct vrotr
{
	template <typename T> 
	FORCE_INLINE auto operator()( T value, T count ) const noexcept
	{
		constexpr size_t N = sizeof( T ) * 8;
		return ( value >> count ) | ( value << ( N - count ) );
	}
};

struct vctz
{
	template <typename T>
	FORCE_INLINE auto operator()( T value ) const noexcept
	{
		if constexpr ( sizeof( T ) == 8 )
			return value ? 64 : __builtin_ctzll( value );
		else
			return value ? 32 : __builtin_ctz( value );
	}
};

struct vclz
{
	template <typename T>
	FORCE_INLINE auto operator()( T value ) const noexcept
	{
		if constexpr ( sizeof( T ) == 8 )
			return value ? 64 : __builtin_clzll( value );
		else
			return value ? 32 : __builtin_clz( value );
	}
};

struct vpopcnt
{
	template <typename T>
	FORCE_INLINE auto operator()( T value ) const noexcept
	{
		if constexpr ( sizeof( T ) == 8 )
			return __builtin_popcountll( value );
		else
			return __builtin_popcount( value );
	}
};

// Builtins.
//
struct twords 
{
	unsigned long long low;
	unsigned long long high;
};
extern "C" [[gnu::always_inline, gnu::nodebug]] void __multi3( twords* o, twords a, twords b ) {
	*o = std::bit_cast< twords >( std::bit_cast< __int128 >( a ) * std::bit_cast< __int128 >( b ) );
}

// Instruction boxing helpers:
//
extern "C" [[gnu::always_inline, gnu::nodebug]] uint64_t __wasm_bpop( uint64_t _ctx_ ) { return ( ( vm_context* ) _ctx_ )->pop_stack(); }
extern "C" [[gnu::always_inline, gnu::nodebug]] void __wasm_bpush( uint64_t _ctx_, uint64_t val ) { ( ( vm_context* ) _ctx_ )->push_stack( val ); }
extern "C" [[gnu::always_inline, gnu::nodebug]] uint64_t __wasm_bret( uint64_t _ctx_, uint64_t key ) { return ( ( vm_context* ) _ctx_ )->next( key ); }

// Generic VM opcode handler:
//
extern "C" [[gnu::always_inline, gnu::nodebug]] uint64_t __wasm_execute( uint16_t opcode, uint64_t _ctx_, uint64_t key, uint64_t aux1, uint64_t aux2 )
{
	vm_context* ctx = ( vm_context* ) _ctx_;

#define IMP_INT(op, fn, ...)							\
	case wasm::op_##i32##_##op:                         \
		return fn<i32>( ctx, key, __VA_ARGS__ );		\
	case wasm::op_##i64##_##op:                         \
		return fn<i64>( ctx, key, __VA_ARGS__ );		

#define IMP_INT_S(op, fn, ...)							\
	case wasm::op_##i32##_##op##_s:                     \
		return fn<i32s>( ctx, key, __VA_ARGS__ );		\
	case wasm::op_##i64##_##op##_s:                     \
		return fn<i64s>( ctx, key, __VA_ARGS__ );		\
	case wasm::op_##i32##_##op##_u:                     \
		return fn<i32u>( ctx, key, __VA_ARGS__ );		\
	case wasm::op_##i64##_##op##_u:                     \
		return fn<i64u>( ctx, key, __VA_ARGS__ );

#define IMP_FP(op, fn, ...)							    \
	case wasm::op_##f32##_##op:                         \
		return fn<f32>( ctx, key, __VA_ARGS__ );		\
	case wasm::op_##f64##_##op:                         \
		return fn<f64>( ctx, key, __VA_ARGS__ );		

#define IMP_RMW(op, fn, ...)							    \
	case wasm::op_i32_atomic_rmw_##op:					    \
		return fn<i32, i32>( ctx, key, __VA_ARGS__ );	    \
	case wasm::op_i32_atomic_rmw8_##op:					    \
		return fn<uint8_t, i32>( ctx, key, __VA_ARGS__ );	\
	case wasm::op_i32_atomic_rmw16_##op:				    \
		return fn<uint16_t, i32>( ctx, key, __VA_ARGS__ );	\
	case wasm::op_i64_atomic_rmw_##op:					    \
		return fn<i64, i64>( ctx, key, __VA_ARGS__ );	    \
	case wasm::op_i64_atomic_rmw8_##op:					    \
		return fn<uint8_t, i64>( ctx, key, __VA_ARGS__ );	\
	case wasm::op_i64_atomic_rmw16_##op:				    \
		return fn<uint16_t, i64>( ctx, key, __VA_ARGS__ );	\
	case wasm::op_i64_atomic_rmw32_##op:				    \
		return fn<i32, i64>( ctx, key, __VA_ARGS__ );	    \

#define IMP_GEN(op, fn, ...)        \
	IMP_INT(op, fn, __VA_ARGS__)    \
	IMP_FP(op, fn, __VA_ARGS__)
#define IMP_GEN_S(op, fn, ...)      \
	IMP_INT_S(op, fn, __VA_ARGS__)  \
	IMP_FP(op, fn, __VA_ARGS__)

	// Special opcodes:
	//
	if ( opcode == apollo::vm::op_get_sp )
	{
		ctx->push_stack( ( uint64_t ) &ctx->peek_stack() );
		return ctx->next( key );
	}
	else if ( opcode == apollo::vm::op_set_sp )
	{
		ctx->set_sp( ctx->pop_stack<uint64_t*>() );
		return ctx->next( key );
	}

	switch( opcode )
	{
		// No-ops / Traps:
		//
		case wasm::op_nop:                 return ctx->next( key );
		default:
		case wasm::op_unreachable:         fastfail( 2 );

		// Control flow:
		//
		case wasm::op_block:               return ctx->next( key );
		case wasm::op_loop:                return ctx->next( key );
		case wasm::op_if:                  return ctx->next( key );
		case wasm::op_else:                return ctx->next( key );
		case wasm::op_end:                 return ctx->next( key );
		case wasm::op_br:                  return __wasm_br( ctx, key );
		case wasm::op_br_table:            fastfail( 3 );  // Should be compiled with no jump tables.
		case wasm::op_br_if:               return __wasm_br_if( ctx, key );
		case wasm::op_return:              return __wasm_return( ctx, key );

		// Call operators:
		//
			
		case wasm::op_call:                return __wasm_ext_call( ctx, key, aux2, ctx->pop_ip<uint64_t>( key ) );
		case wasm::op_call_indirect:       return __wasm_ext_call( ctx, key, aux2, ctx->pop_stack<uint64_t>() );

		// Parametric operators:
		//
		case wasm::op_drop:                return __wasm_drop( ctx, key );
		case wasm::op_select:              return __wasm_select( ctx, key );

		// Variable access:
		//
		case wasm::op_get_local:           return __wasm_get_local( ctx, key );
		case wasm::op_set_local:           return __wasm_set_local( ctx, key );
		case wasm::op_tee_local:           return __wasm_tee_local( ctx, key );
		case wasm::op_get_global:          fastfail( 4 ); // Should be converted to load.
		case wasm::op_set_global:          fastfail( 5 ); // Should be converted to store.

		// Memory allocation:
		//
		case wasm::op_current_memory:      fastfail( 6 ); // Unexpected.
		case wasm::op_grow_memory:         fastfail( 7 ); // Unexpected.

		// Conversations:
		//
		case wasm::op_i32_trunc_s_f32:     return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return (i32s)i; } );
		case wasm::op_i32_trunc_u_f32:     return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return (i32u)i; } );
		case wasm::op_i32_trunc_s_f64:     return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return (i32s)i; } );
		case wasm::op_i32_trunc_u_f64:     return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return (i32u)i; } );
		case wasm::op_i64_trunc_s_f32:     return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return (i64s)i; } );
		case wasm::op_i64_trunc_u_f32:     return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return (i64u)i; } );
		case wasm::op_i64_trunc_s_f64:     return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return (i64s)i; } );
		case wasm::op_i64_trunc_u_f64:     return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return (i64u)i; } );
		case wasm::op_f32_convert_s_i32:   return __wasm_unary<i32s>( ctx, key, [ ] ( auto&& i ) { return (f32)i; } );
		case wasm::op_f32_convert_u_i32:   return __wasm_unary<i32u>( ctx, key, [ ] ( auto&& i ) { return (f32)i; } );
		case wasm::op_f32_convert_s_i64:   return __wasm_unary<i64s>( ctx, key, [ ] ( auto&& i ) { return (f32)i; } );
		case wasm::op_f32_convert_u_i64:   return __wasm_unary<i64u>( ctx, key, [ ] ( auto&& i ) { return (f32)i; } );
		case wasm::op_f64_convert_s_i32:   return __wasm_unary<i32s>( ctx, key, [ ] ( auto&& i ) { return (f64)i; } );
		case wasm::op_f64_convert_u_i32:   return __wasm_unary<i32u>( ctx, key, [ ] ( auto&& i ) { return (f64)i; } );
		case wasm::op_f64_convert_s_i64:   return __wasm_unary<i64s>( ctx, key, [ ] ( auto&& i ) { return (f64)i; } );
		case wasm::op_f64_convert_u_i64:   return __wasm_unary<i64u>( ctx, key, [ ] ( auto&& i ) { return (f64)i; } );
		case wasm::op_i32_wrap_i64:        return __wasm_unary<i64>( ctx, key,  [ ] ( auto&& i ) { return (i32)i; } );
		case wasm::op_i64_extend_s_i32:    return __wasm_unary<i32s>( ctx, key, [ ] ( auto&& i ) { return (i64s)i; } );
		case wasm::op_i64_extend_u_i32:    return __wasm_unary<i32u>( ctx, key, [ ] ( auto&& i ) { return (i64u)i; } );
		case wasm::op_f32_demote_f64:      return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return (f32)i; } );
		case wasm::op_f64_promote_f32:     return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return (f64)i; } );
		case wasm::op_i32_reinterpret_f32: return __wasm_unary<f32>( ctx, key,  [ ] ( auto&& i ) { return *(i32*)&i; } );
		case wasm::op_f32_reinterpret_i32: return __wasm_unary<i32>( ctx, key,  [ ] ( auto&& i ) { return *(f32*)&i; } );
		case wasm::op_i64_reinterpret_f64: return __wasm_unary<f64>( ctx, key,  [ ] ( auto&& i ) { return *(i64*)&i; } );
		case wasm::op_f64_reinterpret_i64: return __wasm_unary<i64>( ctx, key,  [ ] ( auto&& i ) { return *(f64*)&i; } );
			
		case wasm::op_i32_extend_sx_i8:    return __wasm_unary<i32s>( ctx, key, [ ] ( auto&& i ) { return (i8s)i; } );
		case wasm::op_i32_extend_sx_i16:   return __wasm_unary<i32s>( ctx, key, [ ] ( auto&& i ) { return (i16s)i; } );
		case wasm::op_i64_extend_sx_i8:    return __wasm_unary<i64s>( ctx, key, [ ] ( auto&& i ) { return (i8s)i; } );
		case wasm::op_i64_extend_sx_i16:   return __wasm_unary<i64s>( ctx, key, [ ] ( auto&& i ) { return (i16s)i; } );
		case wasm::op_i64_extend_sx_i32:   return __wasm_unary<i64s>( ctx, key, [ ] ( auto&& i ) { return (i32s)i; } );

		// Memory operators:
		//
		case wasm::op_i32_load8s:          return __wasm_load<i32, int8_t>( ctx, key );
		case wasm::op_i32_load8u:          return __wasm_load<i32, uint8_t>( ctx, key );
		case wasm::op_i32_load16s:         return __wasm_load<i32, int16_t>( ctx, key );
		case wasm::op_i32_load16u:         return __wasm_load<i32, uint16_t>( ctx, key );
									       
		case wasm::op_i64_load8s:          return __wasm_load<i64, int8_t>( ctx, key );
		case wasm::op_i64_load8u:          return __wasm_load<i64, uint8_t>( ctx, key );
		case wasm::op_i64_load16s:         return __wasm_load<i64, int16_t>( ctx, key );
		case wasm::op_i64_load16u:         return __wasm_load<i64, uint16_t>( ctx, key );
		case wasm::op_i64_load32s:         return __wasm_load<i64, int32_t>( ctx, key );
		case wasm::op_i64_load32u:         return __wasm_load<i64, uint32_t>( ctx, key );
									       
		case wasm::op_i32_store8:          return __wasm_store<i32, uint8_t>( ctx, key );
		case wasm::op_i32_store16:         return __wasm_store<i32, uint16_t>( ctx, key );
		case wasm::op_i64_store8:          return __wasm_store<i64, uint8_t>( ctx, key );
		case wasm::op_i64_store16:         return __wasm_store<i64, uint16_t>( ctx, key );
		case wasm::op_i64_store32:         return __wasm_store<i64, uint32_t>( ctx, key );
		IMP_GEN(   load,      __wasm_load                                                                  );
		IMP_GEN(   store,     __wasm_store                                                                 );

		// Constants:
		//
		IMP_GEN(   const,     __wasm_load_const                                                            );

		// Comparison operators:
		//
		IMP_INT(   eqz,       __wasm_unary,  [ ] ( auto&& a ) { return a == 0; }                           );
		IMP_GEN(   eq,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a == b; }                 );
		IMP_GEN(   ne,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a != b; }                 );
		IMP_GEN_S( lt,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a < b; }                  );
		IMP_GEN_S( le,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a <= b; }                 );
		IMP_GEN_S( ge,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a >= b; }                 );
		IMP_GEN_S( gt,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a > b; }                  );
		
		// Arithmetic operators:
		//
		IMP_GEN(   add,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a + b; }                  );
		IMP_GEN(   sub,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a - b; }                  );
		IMP_GEN(   mul,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a * b; }                  );
		IMP_GEN_S( div,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a / b; }                  );
		IMP_INT_S( rem,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a % b; }                  );

		// Bitwise operators:
		//
		IMP_INT(   clz,       __wasm_unary,  vclz{}                                                        );
		IMP_INT(   ctz,       __wasm_unary,  vctz{}                                                        );
		IMP_INT(   rotl,      __wasm_binary, vrotl{}                                                       );
		IMP_INT(   rotr,      __wasm_binary, vrotr{}                                                       );
		IMP_INT(   popcnt,    __wasm_unary,  vpopcnt{}                                                     );
		IMP_INT(   and,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a & b; }                  );
		IMP_INT(   or,        __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a | b; }                  );
		IMP_INT(   xor,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a ^ b; }                  );
		IMP_INT(   shl,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a << b; }                 );
		IMP_INT_S( shr,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return a >> b; }                 );
		
		// Floating point operators:
		//
		IMP_FP(    abs,       __wasm_unary,  [ ] ( auto&& a ) { return std::abs( a ); }                    );
		IMP_FP(    ceil,      __wasm_unary,  [ ] ( auto&& a ) { return std::ceil( a ); }                   );
		IMP_FP(    sqrt,      __wasm_unary,  [ ] ( auto&& a ) { return std::sqrt( a ); }                   );
		IMP_FP(    trunc,     __wasm_unary,  [ ] ( auto&& a ) { return std::trunc( a ); }                  );
		IMP_FP(    nearest,   __wasm_unary,  [ ] ( auto&& a ) { return std::round( a ); }                  );
		IMP_FP(    floor,     __wasm_unary,  [ ] ( auto&& a ) { return std::floor( a ); }                  );
		IMP_FP(    neg,       __wasm_unary,  [ ] ( auto&& a ) { return -a; }                               );
		IMP_FP(    min,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return std::min( a, b ); }       );
		IMP_FP(    max,       __wasm_binary, [ ] ( auto&& a, auto&& b ) { return std::max( a, b ); }       );
		IMP_FP(    copysign,  __wasm_binary, [ ] ( auto&& a, auto&& b ) { return std::copysign( a, b ); }  );

		// Atomics:
		//
		case wasm::op_atomic_notify:         fastfail( 8 ); // Unexpected.
		case wasm::op_atomic_wait32:         fastfail( 9 ); // Unexpected.
		case wasm::op_atomic_wait64:         fastfail( 10 ); // Unexpected.
		case wasm::op_atomic_fence:          _mm_mfence(); return ctx->next( key );
		case wasm::op_i32_atomic_load:       return __wasm_atomic_load<i32>( ctx, key );
		case wasm::op_i64_atomic_load:       return __wasm_atomic_load<i64>( ctx, key );
		case wasm::op_i32_atomic_load8:      return __wasm_atomic_load<i32, uint8_t>( ctx, key );
		case wasm::op_i32_atomic_load16:     return __wasm_atomic_load<i32, uint16_t>( ctx, key );
		case wasm::op_i64_atomic_load8:      return __wasm_atomic_load<i64, uint8_t>( ctx, key );
		case wasm::op_i64_atomic_load16:     return __wasm_atomic_load<i64, uint16_t>( ctx, key );
		case wasm::op_i64_atomic_load32:     return __wasm_atomic_load<i64, uint32_t>( ctx, key );
		case wasm::op_i32_atomic_store8:     return __wasm_atomic_store<i32, uint8_t>( ctx, key );
		case wasm::op_i32_atomic_store16:    return __wasm_atomic_store<i32, uint16_t>( ctx, key );
		case wasm::op_i32_atomic_store:      return __wasm_atomic_store<i32>( ctx, key );
		case wasm::op_i64_atomic_store:      return __wasm_atomic_store<i64>( ctx, key );
		case wasm::op_i64_atomic_store8:     return __wasm_atomic_store<i64, uint8_t>( ctx, key );
		case wasm::op_i64_atomic_store16:    return __wasm_atomic_store<i64, uint16_t>( ctx, key );
		case wasm::op_i64_atomic_store32:    return __wasm_atomic_store<i64, uint32_t>( ctx, key );
		IMP_RMW(   add,       __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.fetch_add( o ); return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }    );
		IMP_RMW(   sub,       __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.fetch_sub( o ); return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }    );
		IMP_RMW(   and,       __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.fetch_and( o ); return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }    );
		IMP_RMW(   or,        __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.fetch_or( o );  return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }     );
		IMP_RMW(   xor,       __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.fetch_xor( o ); return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }    );
		IMP_RMW(   xchg,      __wasm_rmw_binary,  [ aux2 ] ( auto& r, auto&& o ) { auto v = r.exchange( o );  return aux2 == apollo::vm::aux2_rmw_relax ? 0 : v; }     );
		IMP_RMW(   cmpxchg,   __wasm_rmw_ternary, [ ] ( auto& r, auto&& e, auto&& c ) { cmpxchg( r, e, c ); return e; } );
	}
}