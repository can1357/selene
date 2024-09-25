#pragma once
#include <stdint.h>
#include <array>
#include <span>
#include <type_traits>
#define APOLLO_ANNOTATION_PREFIX "apollo."
#define _APOLLO_TOSTR(x) #x

// Indicates that the function should not clobber upper bits of the YMM0-YMM5 registers.
//
#define MS_SSE2AVX               __attribute__((ms_abi_sse2avx, flatten))
#define NO_AVX                   __attribute__((flatten, no_builtin, __set_feature__("-avx"), __set_feature__("-avx2"), __set_feature__("-fma"), __set_feature__("-f16c")))
#define NO_SSE                   __attribute__((flatten, no_builtin, __set_feature__("-avx"), __set_feature__("-avx2"), __set_feature__("-fma"), __set_feature__("-f16c"), __set_feature__("-sse"), __set_feature__("-sse2"), __set_feature__("-sse3"), __set_feature__("-sse4.1"), __set_feature__("-sse4.2"), __set_feature__("-ssse3")))

#ifndef __clang__
	#pragma warning( disable: 5030 )
#endif

#ifndef __INTELLISENSE__
// Makes sure the code does not get a extended relocation stub emitted.
//
#define no_stub                  clang::annotate( APOLLO_ANNOTATION_PREFIX "no_stub" ), gnu::noinline
#define __no_stub__              annotate( APOLLO_ANNOTATION_PREFIX "no_stub" ), noinline

// Makes sure the code does emit any mode switch stubs.
//
#define no_mode_switch           clang::annotate( APOLLO_ANNOTATION_PREFIX "no_mode_switch" ), gnu::noinline
#define __no_mode_switch__       annotate( APOLLO_ANNOTATION_PREFIX "no_mode_switch" ), noinline

// Enables virtualization for the function.
//
#define virtualize               clang::annotate( APOLLO_ANNOTATION_PREFIX "virtualize" ), gnu::noinline, gnu::flatten
#define __virtualize__           annotate( APOLLO_ANNOTATION_PREFIX "virtualize" ), noinline, flatten

// Disables MBA obfuscation for the function.
//
#define no_obfuscate             clang::annotate( APOLLO_ANNOTATION_PREFIX "no_obfuscate" ), gnu::noinline, gnu::flatten
#define __no_obfuscate__         annotate( APOLLO_ANNOTATION_PREFIX "no_obfuscate" ), noinline, flatten

// Disables basic block splitting for the function.
//
#define no_split                 clang::annotate( APOLLO_ANNOTATION_PREFIX "no_split" ), gnu::noinline, gnu::flatten
#define __no_split__             annotate( APOLLO_ANNOTATION_PREFIX "no_split" ), noinline, flatten

// Links a file to the given extern global, first 8 bytes will be the size (file_t).
//
#define link_file(s)             clang::annotate( APOLLO_ANNOTATION_PREFIX "external_file:" s )
#define __link_file__(s)         annotate( APOLLO_ANNOTATION_PREFIX "external_file:" s )

// Compiles the given shader for the target specified in the first argument, first 4 bytes will be the size (shader_t).
//
#define compile_shader(s)        clang::annotate( APOLLO_ANNOTATION_PREFIX "compile_shader:" s )
#define __compile_shader__(s)    annotate( APOLLO_ANNOTATION_PREFIX "compile_shader:" s )

// Explicitly enforces alignment.
//
#define enforce_alignment(n)     clang::annotate( APOLLO_ANNOTATION_PREFIX "enforce_alignment:" _APOLLO_TOSTR(n) ), gnu::noinline
#define __enforce_alignment__(n) annotate( APOLLO_ANNOTATION_PREFIX "enforce_alignment:" _APOLLO_TOSTR(n) ), noinline

// Explicitly enforces feature settings.
//
#define set_feature(s)           clang::annotate( APOLLO_ANNOTATION_PREFIX "set_feature:" s )
#define __set_feature__(s)       annotate( APOLLO_ANNOTATION_PREFIX "set_feature:" s )

// Applies to file linked externals, compresses the data using ZSTD before embedding.
//
#define zcompressed              clang::annotate( APOLLO_ANNOTATION_PREFIX "zcompressed" )
#define __zcompressed__          annotate( APOLLO_ANNOTATION_PREFIX "zcompressed" )

// Hints to the linker that this global is storing an external symbolic link to a PDB file that will be called.
//
#define sdk_syminvoke            clang::annotate( APOLLO_ANNOTATION_PREFIX "sdk_syminvoke" )
#define __sdk_syminvoke__        annotate( APOLLO_ANNOTATION_PREFIX "sdk_syminvoke" )

// Embeds the user token in the char array tagged with this attribute.
//
#define link_token               clang::annotate( APOLLO_ANNOTATION_PREFIX "link_token" )
#define __link_token__           annotate( APOLLO_ANNOTATION_PREFIX "link_token" )

// Embeds a user flag in the bool tagged with this attribute.
//
#define link_flag(s)             clang::annotate( APOLLO_ANNOTATION_PREFIX "link_flag:" s )
#define __link_flag__(s)         annotate( APOLLO_ANNOTATION_PREFIX "link_flag:" s )

// Embeds the object identifier in the char array tagged with this attribute.
//
#define link_object_id           clang::annotate( APOLLO_ANNOTATION_PREFIX "link_object_id" )
#define __link_object_id__       annotate( APOLLO_ANNOTATION_PREFIX "link_object_id" )

// Embeds the mapping details.
//
#define link_mapping             clang::annotate( APOLLO_ANNOTATION_PREFIX "link_mapping" )
#define __link_mapping__         annotate( APOLLO_ANNOTATION_PREFIX "link_mapping" )

// Embeds the minivan key.
//
#define link_mvkey               clang::annotate( APOLLO_ANNOTATION_PREFIX "link_mvkey" )
#define __link_mvkey__           annotate( APOLLO_ANNOTATION_PREFIX "link_mvkey" )

// Embeds the node information.
//
#define link_nodeinf             clang::annotate( APOLLO_ANNOTATION_PREFIX "link_nodeinf" )
#define __link_nodeinf__         annotate( APOLLO_ANNOTATION_PREFIX "link_nodeinf" )

// Marks the symbol as discardable after initialization.
//
#define init_discardable         clang::annotate( APOLLO_ANNOTATION_PREFIX "init_discardable" )
#define __init_discardable__     annotate( APOLLO_ANNOTATION_PREFIX "init_discardable" )

// Disables profiler instrumentation for the given function.
//
#define no_instrument            clang::annotate( APOLLO_ANNOTATION_PREFIX "no_instrument" ), gnu::flatten
#define __no_instrument__        annotate( APOLLO_ANNOTATION_PREFIX "no_instrument" ), flatten
#define __no_instrument          __attribute__((annotate( APOLLO_ANNOTATION_PREFIX "no_instrument" )))

// Makes sure the function ends with a tail call.
//
#define must_tail                clang::annotate( APOLLO_ANNOTATION_PREFIX "must_tail" ), no_instrument
#define __must_tail__            annotate( APOLLO_ANNOTATION_PREFIX "must_tail" ), __no_instrument__
#endif

// Define some helpers.
//
namespace apollo
{
    inline uint8_t __opaque_inline_buffer[ 256 ];

#pragma pack(push, 1)
    struct file_t
    {
        volatile uint64_t       length = {};
        uint8_t                 data = {};

        uint64_t size() const { return length; }
        const uint8_t* begin() const { return &data; }
        const uint8_t* end() const { return &data + size(); }
    };
    struct token_t
    {
        std::array<uint8_t, 128> data;
        uint64_t size() const { return sizeof( token_t ); }
        inline const uint8_t* begin() const { return ( const uint8_t* ) this; }
        inline const uint8_t* end() const { return ( const uint8_t* ) ( this + 1 ); }
    };
    struct mapping_t
    {
        volatile size_t                  length = 0;
        const uint8_t* volatile          opaque = &__opaque_inline_buffer[ 0 ];

        uint64_t size() const { return length; }
        inline const uint8_t* begin() const { return opaque; }
        inline const uint8_t* end() const { return opaque + length; }
    };
	 template<size_t N>
	 union shader_t
	 {
		 char data[ N ] = { 0 };
		 struct
		 {
			 volatile uint32_t length;
			 volatile char bytecode[ 1 ];
		 };
		 consteval shader_t( const char( &src )[ N + 1 ] ) noexcept
		 {
			 for ( size_t i = 0; i != N; i++ )
				 data[ i ] = src[ i ];
		 }
		 std::span<const char> get() const noexcept
		 {
			 return { ( const char* ) &bytecode[ 0 ], length };
		 }
	 };
	 template<size_t N>
	 shader_t( const char( & )[ N ] )->shader_t<N - 1>;
#pragma pack(pop)

    // User token, uniquely identifies a user. Set by the server.
    //
    [[link_token]] inline token_t token = {};

    // Mapping information, contains the information for the server to be able to 
    // re-create this image for events such as unwinding. Points to an opaque encrypted 
    // data structure set by the server.
    //
    [[link_mapping]] inline mapping_t mapping = {};

    // Object identifier, uniquely identifies a build. Set by the linker.
    //
    [[link_object_id]] inline uint64_t object_id = 0;
};

#define __Virtualized(...) ([&]() __attribute__((__virtualize__)) -> decltype(auto) { __VA_ARGS__; }())
#define __NoObfuscate(...) ([&]() __attribute__((__no_obfuscate__)) -> decltype(auto) { __VA_ARGS__; }())
#define __Escape(...) ([&]() __attribute__((noinline)) -> decltype(auto) { __VA_ARGS__; }())