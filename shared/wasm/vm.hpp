#pragma once
#include "common.hpp"
#include "enums.hpp"
#include <xstd/formatting.hpp>
#include <xstd/hashable.hpp>

namespace wasm
{
    // List of opcode prefixes and opcodes themselves.
    //
    enum vm_opcode_prefix : uint8_t
    {
        op_prefix_reserved =              0xff,
        op_prefix_threads =               0xfe,
        op_prefix_simd =                  0xfd,
        op_prefix_misc =                  0xfc,
    };
    enum vm_opcode : uint16_t
    {
        // Control flow operators:
        //
        op_unreachable =                  0x00, // trap immediately
        op_nop =                          0x01, // no operation
        op_block =                        0x02, // begin a sequence of expressions, yielding 0 or 1 values
        op_loop =                         0x03, // begin a block which can also form control flow loops
        op_if =                           0x04, // begin if expression
        op_else  =                        0x05, // begin else expression of if
        op_end =                          0x0b, // end a block, loop, or if
        op_br =                           0x0c, // break that targets an outer nested block
        op_br_if =                        0x0d, // conditional break that targets an outer nested block
        op_br_table =                     0x0e, // branch table control flow construct
        op_return =                       0x0f, // return zero or one value from this function

        // Call operators:
        //
        op_call =                         0x10, // call a function by its index
        op_call_indirect =                0x11, // call a function indirect with an expected signature

        // Parametric operators:
        //
        op_drop =                         0x1a, // ignore value
        op_select =                       0x1b, // select one of two values based on condition

        // Variable access:
        //
        op_get_local =                    0x20, // read a local variable or parameter
        op_set_local =                    0x21, // write a local variable or parameter
        op_tee_local =                    0x22, // write a local variable or parameter and return the same value
        op_get_global =                   0x23, // read a global variable
        op_set_global =                   0x24, // write a global variable

        // Memory operators:
        //
        op_i32_load =                     0x28, // load from memory
        op_i64_load =                     0x29, // load from memory
        op_f32_load =                     0x2a, // load from memory
        op_f64_load =                     0x2b, // load from memory
        op_i32_load8s =                   0x2c, // load i32 from i8 memory via sx
        op_i32_load8u =                   0x2d, // load i32 from i8 memory via zx
        op_i32_load16s =                  0x2e, // load i32 from i16 memory via sx
        op_i32_load16u =                  0x2f, // load i32 from i16 memory via zx
        op_i64_load8s =                   0x30, // load i64 from i8 memory via sx
        op_i64_load8u =                   0x31, // load i64 from i8 memory via zx
        op_i64_load16s =                  0x32, // load i64 from i16 memory via sx
        op_i64_load16u =                  0x33, // load i64 from i16 memory via zx
        op_i64_load32s =                  0x34, // load i64 from i32 memory via sx
        op_i64_load32u =                  0x35, // load i64 from i32 memory via zx
        op_i32_store =                    0x36, // store to memory
        op_i64_store =                    0x37, // store to memory
        op_f32_store =                    0x38, // store to memory
        op_f64_store =                    0x39, // store to memory
        op_i32_store8 =                   0x3a, // store i32 narrowed into i8 to memory
        op_i32_store16 =                  0x3b, // store i32 narrowed into i16 to memory
        op_i64_store8 =                   0x3c, // store i64 narrowed into i8 to memory
        op_i64_store16 =                  0x3d, // store i64 narrowed into i16 to memory
        op_i64_store32 =                  0x3e, // store i64 narrowed into i32 to memory
        op_current_memory =               0x3f, // query the size of memory
        op_grow_memory =                  0x40, // grow the size of memory

        // Constants:
        //
        op_i32_const =                    0x41, // a constant value interpreted as i32
        op_i64_const =                    0x42, // a constant value interpreted as i64
        op_f32_const =                    0x43, // a constant value interpreted as f32
        op_f64_const =                    0x44, // a constant value interpreted as f64

        // Comparison operators:
        //
        op_i32_eqz =                      0x45,
        op_i32_eq =                       0x46,
        op_i32_ne =                       0x47,
        op_i32_lt_s =                     0x48,
        op_i32_lt_u =                     0x49,
        op_i32_gt_s =                     0x4a,
        op_i32_gt_u =                     0x4b,
        op_i32_le_s =                     0x4c,
        op_i32_le_u =                     0x4d,
        op_i32_ge_s =                     0x4e,
        op_i32_ge_u =                     0x4f,
        op_i64_eqz =                      0x50,
        op_i64_eq =                       0x51,
        op_i64_ne =                       0x52,
        op_i64_lt_s =                     0x53,
        op_i64_lt_u =                     0x54,
        op_i64_gt_s =                     0x55,
        op_i64_gt_u =                     0x56,
        op_i64_le_s =                     0x57,
        op_i64_le_u =                     0x58,
        op_i64_ge_s =                     0x59,
        op_i64_ge_u =                     0x5a,
        op_f32_eq =                       0x5b,
        op_f32_ne =                       0x5c,
        op_f32_lt =                       0x5d,
        op_f32_gt =                       0x5e,
        op_f32_le =                       0x5f,
        op_f32_ge =                       0x60,
        op_f64_eq =                       0x61,
        op_f64_ne =                       0x62,
        op_f64_lt =                       0x63,
        op_f64_gt =                       0x64,
        op_f64_le =                       0x65,
        op_f64_ge =                       0x66,

        // Numeric operators:
        //
        op_i32_clz =                      0x67,
        op_i32_ctz =                      0x68,
        op_i32_popcnt =                   0x69,
        op_i32_add =                      0x6a,
        op_i32_sub =                      0x6b,
        op_i32_mul =                      0x6c,
        op_i32_div_s =                    0x6d,
        op_i32_div_u =                    0x6e,
        op_i32_rem_s =                    0x6f,
        op_i32_rem_u =                    0x70,
        op_i32_and =                      0x71,
        op_i32_or =                       0x72,
        op_i32_xor =                      0x73,
        op_i32_shl =                      0x74,
        op_i32_shr_s =                    0x75,
        op_i32_shr_u =                    0x76,
        op_i32_rotl =                     0x77,
        op_i32_rotr =                     0x78,
        op_i64_clz =                      0x79,
        op_i64_ctz =                      0x7a,
        op_i64_popcnt =                   0x7b,
        op_i64_add =                      0x7c,
        op_i64_sub =                      0x7d,
        op_i64_mul =                      0x7e,
        op_i64_div_s =                    0x7f,
        op_i64_div_u =                    0x80,
        op_i64_rem_s =                    0x81,
        op_i64_rem_u =                    0x82,
        op_i64_and =                      0x83,
        op_i64_or =                       0x84,
        op_i64_xor =                      0x85,
        op_i64_shl =                      0x86,
        op_i64_shr_s =                    0x87,
        op_i64_shr_u =                    0x88,
        op_i64_rotl =                     0x89,
        op_i64_rotr =                     0x8a,
        op_f32_abs =                      0x8b,
        op_f32_neg =                      0x8c,
        op_f32_ceil =                     0x8d,
        op_f32_floor =                    0x8e,
        op_f32_trunc =                    0x8f,
        op_f32_nearest =                  0x90,
        op_f32_sqrt =                     0x91,
        op_f32_add =                      0x92,
        op_f32_sub =                      0x93,
        op_f32_mul =                      0x94,
        op_f32_div =                      0x95,
        op_f32_min =                      0x96,
        op_f32_max =                      0x97,
        op_f32_copysign =                 0x98,
        op_f64_abs =                      0x99,
        op_f64_neg =                      0x9a,
        op_f64_ceil =                     0x9b,
        op_f64_floor =                    0x9c,
        op_f64_trunc =                    0x9d,
        op_f64_nearest =                  0x9e,
        op_f64_sqrt =                     0x9f,
        op_f64_add =                      0xa0,
        op_f64_sub =                      0xa1,
        op_f64_mul =                      0xa2,
        op_f64_div =                      0xa3,
        op_f64_min =                      0xa4,
        op_f64_max =                      0xa5,
        op_f64_copysign =                 0xa6,

        // Conversations:
        // - 0xFC prefix can be added to the truncates to saturate.
        //
        op_i32_wrap_i64 =                 0xa7,
        op_i32_trunc_s_f32 =              0xa8,
        op_i32_trunc_u_f32 =              0xa9,
        op_i32_trunc_s_f64 =              0xaa,
        op_i32_trunc_u_f64 =              0xab,
        op_i64_extend_s_i32 =             0xac,
        op_i64_extend_u_i32 =             0xad,
        op_i64_trunc_s_f32 =              0xae,
        op_i64_trunc_u_f32 =              0xaf,
        op_i64_trunc_s_f64 =              0xb0,
        op_i64_trunc_u_f64 =              0xb1,
        op_f32_convert_s_i32 =            0xb2,
        op_f32_convert_u_i32 =            0xb3,
        op_f32_convert_s_i64 =            0xb4,
        op_f32_convert_u_i64 =            0xb5,
        op_f32_demote_f64 =               0xb6,
        op_f64_convert_s_i32 =            0xb7,
        op_f64_convert_u_i32 =            0xb8,
        op_f64_convert_s_i64 =            0xb9,
        op_f64_convert_u_i64 =            0xba,
        op_f64_promote_f32 =              0xbb,

        // Reinterpretations:
        //
        op_i32_reinterpret_f32 =          0xbc,
        op_i64_reinterpret_f64 =          0xbd,
        op_f32_reinterpret_i32 =          0xbe,
        op_f64_reinterpret_i64 =          0xbf,

        // Sign-extension operators proposal.
        //
        op_i32_extend_sx_i8 =             0xc0,
        op_i32_extend_sx_i16 =            0xc1,
        op_i64_extend_sx_i8 =             0xc2,
        op_i64_extend_sx_i16 =            0xc3,
        op_i64_extend_sx_i32 =            0xc4,

        // Wait / notify:
        //
        op_atomic_notify =                0x00fe,
        op_atomic_wait32 =                0x01fe,
        op_atomic_wait64 =                0x02fe,

        // Fence:
        //
        op_atomic_fence =                 0x03fe,

        // Load store primitives:
        // -- All extensions are zero-extensions.
        //
        op_i32_atomic_load =              0x10fe,
        op_i64_atomic_load =              0x11fe,
        op_i32_atomic_load8 =             0x12fe,
        op_i32_atomic_load16 =            0x13fe,
        op_i64_atomic_load8 =             0x14fe,
        op_i64_atomic_load16 =            0x15fe,
        op_i64_atomic_load32 =            0x16fe,
        op_i32_atomic_store =             0x17fe,
        op_i64_atomic_store =             0x18fe,
        op_i32_atomic_store8 =            0x19fe,
        op_i32_atomic_store16 =           0x1afe,
        op_i64_atomic_store8 =            0x1bfe,
        op_i64_atomic_store16 =           0x1cfe,
        op_i64_atomic_store32 =           0x1dfe,

        // Read modify write primitives:
        // -- All extensions are zero-extensions.
        //
        op_i32_atomic_rmw_add =           0x1efe,
        op_i64_atomic_rmw_add =           0x1ffe,
        op_i32_atomic_rmw8_add =          0x20fe,
        op_i32_atomic_rmw16_add =         0x21fe,
        op_i64_atomic_rmw8_add =          0x22fe,
        op_i64_atomic_rmw16_add =         0x23fe,
        op_i64_atomic_rmw32_add =         0x24fe,
        op_i32_atomic_rmw_sub =           0x25fe,
        op_i64_atomic_rmw_sub =           0x26fe,
        op_i32_atomic_rmw8_sub =          0x27fe,
        op_i32_atomic_rmw16_sub =         0x28fe,
        op_i64_atomic_rmw8_sub =          0x29fe,
        op_i64_atomic_rmw16_sub =         0x2afe,
        op_i64_atomic_rmw32_sub =         0x2bfe,
        op_i32_atomic_rmw_and =           0x2cfe,
        op_i64_atomic_rmw_and =           0x2dfe,
        op_i32_atomic_rmw8_and =          0x2efe,
        op_i32_atomic_rmw16_and =         0x2ffe,
        op_i64_atomic_rmw8_and =          0x30fe,
        op_i64_atomic_rmw16_and =         0x31fe,
        op_i64_atomic_rmw32_and =         0x32fe,
        op_i32_atomic_rmw_or =            0x33fe,
        op_i64_atomic_rmw_or =            0x34fe,
        op_i32_atomic_rmw8_or =           0x35fe,
        op_i32_atomic_rmw16_or =          0x36fe,
        op_i64_atomic_rmw8_or =           0x37fe,
        op_i64_atomic_rmw16_or =          0x38fe,
        op_i64_atomic_rmw32_or =          0x39fe,
        op_i32_atomic_rmw_xor =           0x3afe,
        op_i64_atomic_rmw_xor =           0x3bfe,
        op_i32_atomic_rmw8_xor =          0x3cfe,
        op_i32_atomic_rmw16_xor =         0x3dfe,
        op_i64_atomic_rmw8_xor =          0x3efe,
        op_i64_atomic_rmw16_xor =         0x3ffe,
        op_i64_atomic_rmw32_xor =         0x40fe,
        op_i32_atomic_rmw_xchg =          0x41fe,
        op_i64_atomic_rmw_xchg =          0x42fe,
        op_i32_atomic_rmw8_xchg =         0x43fe,
        op_i32_atomic_rmw16_xchg =        0x44fe,
        op_i64_atomic_rmw8_xchg =         0x45fe,
        op_i64_atomic_rmw16_xchg =        0x46fe,
        op_i64_atomic_rmw32_xchg =        0x47fe,
        op_i32_atomic_rmw_cmpxchg =       0x48fe,
        op_i64_atomic_rmw_cmpxchg =       0x49fe,
        op_i32_atomic_rmw8_cmpxchg =      0x4afe,
        op_i32_atomic_rmw16_cmpxchg =     0x4bfe,
        op_i64_atomic_rmw8_cmpxchg =      0x4cfe,
        op_i64_atomic_rmw16_cmpxchg =     0x4dfe,
        op_i64_atomic_rmw32_cmpxchg =     0x4efe,
    };

    // Immediate operands for the opcodes.
    //
    struct memory_immediate
    {
        var_uint_t<32>                    alignment;
        var_size_t                        offset;

        std::string to_string() const { return xstd::fmt::str( "{ 0x%p, 0x%x align }", offset.value, 1ull << alignment.value ); }
        auto tie() { return std::tie( alignment, offset ); }
    };
    struct iblock_sig_imm
    {
        block_type                        signature;

        std::string to_string() const { return xstd::fmt::str( "{ sig: 0x%x }", ( uint32_t ) ( uint8_t ) signature.value ); }
        auto tie() { return std::tie( signature ); }
    };
    struct ibranch_imm
    {
        // Relative depth of the block.
        //
        var_uint_t<32>                    relative_depth;

        std::string to_string() const { return xstd::fmt::str( "{ depth: %d }", relative_depth.value ); }
        auto tie() { return std::tie( relative_depth ); }
    };
    struct ijmptable_imm
    {
        // Target entries that indicate an outer block or loop to which to break.
        //
        var_container<var_index_t>         target_table;

        // An outer block to which to break in the default case.
        //
        var_index_t                        default_target;

        std::string to_string() const { return xstd::fmt::str( "{ %d entries, def => 0x%llx }", target_table.size(), default_target ); }
        auto tie() { return std::tie( target_table, default_target ); }
    };
    struct icall_imm
    {
        // The index of the function we're calling.
        //
        var_index_t                        function_index;

        std::string to_string() const { return xstd::fmt::str( "#0x%llx", function_index.value ); }
        auto tie() { return std::tie( function_index ); }
    };
    struct icall_indirect_imm
    {
        // The index of the type describing the function signature.
        //
        var_index_t                        type_index;
        var_bool_t                         reserved;

        std::string to_string() const { return xstd::fmt::str( "{ fn type: 0x%llx }", type_index.value ); }
        auto tie() { return std::tie( type_index, reserved ); }
    };
    struct ilocal_index_imm
    {
        // Index of the related local variable.
        //
        var_index_t                        local_index;

        std::string to_string() const { return xstd::fmt::str( "#0x%llx", local_index.value ); }
        auto tie() { return std::tie( local_index ); }
    };
    struct iglobal_index_imm
    {
        // Index of the related global variable.
        //
        var_index_t                        global_index;

        std::string to_string() const { return xstd::fmt::str( "#0x%llx", global_index.value ); }
        auto tie() { return std::tie( global_index ); }
    };
    struct imemquery_immediate
    {
        var_bool_t                        reserved;

        std::string to_string() const { return ""; }
        auto tie() { return std::tie( reserved ); }
    };

    // Mapping of the operands.
    //
    namespace impl
    {
        struct null_operands
        {
            std::string to_string() const { return ""; }
            static null_operands deserialize( xstd::serialization& stream ) { return {}; }
            void serialize( xstd::serialization& stream ) const {}
        };
    }

    template<size_t op>
    struct operands { using type = impl::null_operands; using rtype = void; };
    #define MAP_OPERANDS( o, t ) template<> struct operands<o> { using type = t; using rtype = t; }
    MAP_OPERANDS( op_block,                       iblock_sig_imm      );
    MAP_OPERANDS( op_loop,                        iblock_sig_imm      );
    MAP_OPERANDS( op_if,                          iblock_sig_imm      );
    MAP_OPERANDS( op_br,                          ibranch_imm         );
    MAP_OPERANDS( op_br_if,                       ibranch_imm         );
    MAP_OPERANDS( op_br_table,                    ijmptable_imm       );
    MAP_OPERANDS( op_call,                        icall_imm           );
    MAP_OPERANDS( op_call_indirect,               icall_indirect_imm  );
    MAP_OPERANDS( op_get_local,                   ilocal_index_imm    );
    MAP_OPERANDS( op_set_local,                   ilocal_index_imm    );
    MAP_OPERANDS( op_tee_local,                   ilocal_index_imm    );
    MAP_OPERANDS( op_get_global,                  iglobal_index_imm   );
    MAP_OPERANDS( op_set_global,                  iglobal_index_imm   );
    MAP_OPERANDS( op_i32_load,                    memory_immediate    );
    MAP_OPERANDS( op_i64_load,                    memory_immediate    );
    MAP_OPERANDS( op_f32_load,                    memory_immediate    );
    MAP_OPERANDS( op_f64_load,                    memory_immediate    );
    MAP_OPERANDS( op_i32_load8s,                  memory_immediate    );
    MAP_OPERANDS( op_i32_load8u,                  memory_immediate    );
    MAP_OPERANDS( op_i32_load16s,                 memory_immediate    );
    MAP_OPERANDS( op_i32_load16u,                 memory_immediate    );
    MAP_OPERANDS( op_i64_load8s,                  memory_immediate    );
    MAP_OPERANDS( op_i64_load8u,                  memory_immediate    );
    MAP_OPERANDS( op_i64_load16s,                 memory_immediate    );
    MAP_OPERANDS( op_i64_load16u,                 memory_immediate    );
    MAP_OPERANDS( op_i64_load32s,                 memory_immediate    );
    MAP_OPERANDS( op_i64_load32u,                 memory_immediate    );
    MAP_OPERANDS( op_i32_store,                   memory_immediate    );
    MAP_OPERANDS( op_i64_store,                   memory_immediate    );
    MAP_OPERANDS( op_f32_store,                   memory_immediate    );
    MAP_OPERANDS( op_f64_store,                   memory_immediate    );
    MAP_OPERANDS( op_i32_store8,                  memory_immediate    );
    MAP_OPERANDS( op_i32_store16,                 memory_immediate    );
    MAP_OPERANDS( op_i64_store8,                  memory_immediate    );
    MAP_OPERANDS( op_i64_store16,                 memory_immediate    );
    MAP_OPERANDS( op_i64_store32,                 memory_immediate    );
    MAP_OPERANDS( op_current_memory,              imemquery_immediate );
    MAP_OPERANDS( op_grow_memory,                 imemquery_immediate );
    MAP_OPERANDS( op_i32_const,                   var_int_t<32>       );
    MAP_OPERANDS( op_i64_const,                   var_int_t<64>       );
    MAP_OPERANDS( op_f32_const,                   float               );
    MAP_OPERANDS( op_f64_const,                   double              );
    MAP_OPERANDS( op_atomic_notify,               memory_immediate    );
    MAP_OPERANDS( op_atomic_wait32,               memory_immediate    );
    MAP_OPERANDS( op_atomic_wait64,               memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_load,             memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_load,             memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_load8,            memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_load16,           memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_load8,            memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_load16,           memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_load32,           memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_store,            memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_store,            memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_store8,           memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_store16,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_store8,           memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_store16,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_store32,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_add,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_add,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_add,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_add,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_add,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_add,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_add,        memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_sub,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_sub,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_sub,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_sub,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_sub,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_sub,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_sub,        memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_and,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_and,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_and,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_and,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_and,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_and,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_and,        memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_or,           memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_or,           memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_or,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_or,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_or,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_or,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_or,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_xor,          memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_xor,          memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_xor,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_xor,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_xor,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_xor,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_xor,        memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_xchg,         memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_xchg,         memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_xchg,        memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_xchg,       memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_xchg,        memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_xchg,       memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_xchg,       memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw_cmpxchg,      memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw_cmpxchg,      memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw8_cmpxchg,     memory_immediate    );
    MAP_OPERANDS( op_i32_atomic_rmw16_cmpxchg,    memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw8_cmpxchg,     memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw16_cmpxchg,    memory_immediate    );
    MAP_OPERANDS( op_i64_atomic_rmw32_cmpxchg,    memory_immediate    );
    #undef MAP_OPERANDS
    template<size_t o> using operands_t =  typename operands<o>::type;
    template<size_t o> using roperands_t = typename operands<o>::rtype;
};