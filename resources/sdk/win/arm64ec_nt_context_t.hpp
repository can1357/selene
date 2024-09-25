#pragma once
#include <sdkgen/support_library.hpp>
#include "arm64_nt_neon128_t.hpp"

#include "magic/arm64ec_nt_context_t.start.hpp"
namespace win
{
    // [struct _ARM64EC_NT_CONTEXT]
    // => Windows 11
    //
    struct arm64ec_nt_context_t                                                           
    {                                                                                     
        // Windows 11                                                                     
        //                                                                                
        _m000 uint64_t                                      amd64_p1_home;                  //{ +0x0000    } | .AMD64_P1Home
        _m001 uint64_t                                      amd64_p2_home;                  //{ +0x0008    } | .AMD64_P2Home
        _m002 uint64_t                                      amd64_p3_home;                  //{ +0x0010    } | .AMD64_P3Home
        _m003 uint64_t                                      amd64_p4_home;                  //{ +0x0018    } | .AMD64_P4Home
        _m004 uint64_t                                      amd64_p5_home;                  //{ +0x0020    } | .AMD64_P5Home
        _m005 uint64_t                                      amd64_p6_home;                  //{ +0x0028    } | .AMD64_P6Home
        _m006 uint32_t                                      context_flags;                  //{ +0x0030    } | .ContextFlags
        _m007 uint32_t                                      amd64_mx_csr_copy;              //{ +0x0034    } | .AMD64_MxCsr_copy
        _m008 uint16_t                                      amd64_seg_cs;                   //{ +0x0038    } | .AMD64_SegCs
        _m009 uint16_t                                      amd64_seg_ds;                   //{ +0x003a    } | .AMD64_SegDs
        _m010 uint16_t                                      amd64_seg_es;                   //{ +0x003c    } | .AMD64_SegEs
        _m011 uint16_t                                      amd64_seg_fs;                   //{ +0x003e    } | .AMD64_SegFs
        _m012 uint16_t                                      amd64_seg_gs;                   //{ +0x0040    } | .AMD64_SegGs
        _m013 uint16_t                                      amd64_seg_ss;                   //{ +0x0042    } | .AMD64_SegSs
        _m014 uint32_t                                      amd64_e_flags;                  //{ +0x0044    } | .AMD64_EFlags
        _m015 uint64_t                                      amd64_dr0;                      //{ +0x0048    } | .AMD64_Dr0
        _m016 uint64_t                                      amd64_dr1;                      //{ +0x0050    } | .AMD64_Dr1
        _m017 uint64_t                                      amd64_dr2;                      //{ +0x0058    } | .AMD64_Dr2
        _m018 uint64_t                                      amd64_dr3;                      //{ +0x0060    } | .AMD64_Dr3
        _m019 uint64_t                                      amd64_dr6;                      //{ +0x0068    } | .AMD64_Dr6
        _m020 uint64_t                                      amd64_dr7;                      //{ +0x0070    } | .AMD64_Dr7
        _m021 uint64_t                                      x8;                             //{ +0x0078    } | .X8
        _m022 uint64_t                                      x0;                             //{ +0x0080    } | .X0
        _m023 uint64_t                                      x1;                             //{ +0x0088    } | .X1
        _m024 uint64_t                                      x27;                            //{ +0x0090    } | .X27
        _m025 uint64_t                                      sp;                             //{ +0x0098    } | .Sp
        _m026 uint64_t                                      fp;                             //{ +0x00a0    } | .Fp
        _m027 uint64_t                                      x25;                            //{ +0x00a8    } | .X25
        _m028 uint64_t                                      x26;                            //{ +0x00b0    } | .X26
        _m029 uint64_t                                      x2;                             //{ +0x00b8    } | .X2
        _m030 uint64_t                                      x3;                             //{ +0x00c0    } | .X3
        _m031 uint64_t                                      x4;                             //{ +0x00c8    } | .X4
        _m032 uint64_t                                      x5;                             //{ +0x00d0    } | .X5
        _m033 uint64_t                                      x19;                            //{ +0x00d8    } | .X19
        _m034 uint64_t                                      x20;                            //{ +0x00e0    } | .X20
        _m035 uint64_t                                      x21;                            //{ +0x00e8    } | .X21
        _m036 uint64_t                                      x22;                            //{ +0x00f0    } | .X22
        _m037 uint64_t                                      pc;                             //{ +0x00f8    } | .Pc
        _m038 uint16_t                                      amd64_control_word;             //{ +0x0100    } | .AMD64_ControlWord
        _m039 uint16_t                                      amd64_status_word;              //{ +0x0102    } | .AMD64_StatusWord
        _m040 uint8_t                                       amd64_tag_word;                 //{ +0x0104    } | .AMD64_TagWord
        _m041 uint8_t                                       amd64_reserved1;                //{ +0x0105    } | .AMD64_Reserved1
        _m042 uint16_t                                      amd64_error_opcode;             //{ +0x0106    } | .AMD64_ErrorOpcode
        _m043 uint32_t                                      amd64_error_offset;             //{ +0x0108    } | .AMD64_ErrorOffset
        _m044 uint16_t                                      amd64_error_selector;           //{ +0x010c    } | .AMD64_ErrorSelector
        _m045 uint16_t                                      amd64_reserved2;                //{ +0x010e    } | .AMD64_Reserved2
        _m046 uint32_t                                      amd64_data_offset;              //{ +0x0110    } | .AMD64_DataOffset
        _m047 uint16_t                                      amd64_data_selector;            //{ +0x0114    } | .AMD64_DataSelector
        _m048 uint16_t                                      amd64_reserved3;                //{ +0x0116    } | .AMD64_Reserved3
        _m049 uint32_t                                      amd64_mx_csr;                   //{ +0x0118    } | .AMD64_MxCsr
        _m050 uint32_t                                      amd64_mx_csr_mask;              //{ +0x011c    } | .AMD64_MxCsr_Mask
        _m051 uint64_t                                      lr;                             //{ +0x0120    } | .Lr
        _m052 uint16_t                                      x16_0;                          //{ +0x0128    } | .X16_0
        _m053 uint16_t                                      amd64_st0_reserved1;            //{ +0x012a    } | .AMD64_St0_Reserved1
        _m054 uint32_t                                      amd64_st0_reserved2;            //{ +0x012c    } | .AMD64_St0_Reserved2
        _m055 uint64_t                                      x6;                             //{ +0x0130    } | .X6
        _m056 uint16_t                                      x16_1;                          //{ +0x0138    } | .X16_1
        _m057 uint16_t                                      amd64_st1_reserved1;            //{ +0x013a    } | .AMD64_St1_Reserved1
        _m058 uint32_t                                      amd64_st1_reserved2;            //{ +0x013c    } | .AMD64_St1_Reserved2
        _m059 uint64_t                                      x7;                             //{ +0x0140    } | .X7
        _m060 uint16_t                                      x16_2;                          //{ +0x0148    } | .X16_2
        _m061 uint16_t                                      amd64_st2_reserved1;            //{ +0x014a    } | .AMD64_St2_Reserved1
        _m062 uint32_t                                      amd64_st2_reserved2;            //{ +0x014c    } | .AMD64_St2_Reserved2
        _m063 uint64_t                                      x9;                             //{ +0x0150    } | .X9
        _m064 uint16_t                                      x16_3;                          //{ +0x0158    } | .X16_3
        _m065 uint16_t                                      amd64_st3_reserved1;            //{ +0x015a    } | .AMD64_St3_Reserved1
        _m066 uint32_t                                      amd64_st3_reserved2;            //{ +0x015c    } | .AMD64_St3_Reserved2
        _m067 uint64_t                                      x10;                            //{ +0x0160    } | .X10
        _m068 uint16_t                                      x17_0;                          //{ +0x0168    } | .X17_0
        _m069 uint16_t                                      amd64_st4_reserved1;            //{ +0x016a    } | .AMD64_St4_Reserved1
        _m070 uint32_t                                      amd64_st4_reserved2;            //{ +0x016c    } | .AMD64_St4_Reserved2
        _m071 uint64_t                                      x11;                            //{ +0x0170    } | .X11
        _m072 uint16_t                                      x17_1;                          //{ +0x0178    } | .X17_1
        _m073 uint16_t                                      amd64_st5_reserved1;            //{ +0x017a    } | .AMD64_St5_Reserved1
        _m074 uint32_t                                      amd64_st5_reserved2;            //{ +0x017c    } | .AMD64_St5_Reserved2
        _m075 uint64_t                                      x12;                            //{ +0x0180    } | .X12
        _m076 uint16_t                                      x17_2;                          //{ +0x0188    } | .X17_2
        _m077 uint16_t                                      amd64_st6_reserved1;            //{ +0x018a    } | .AMD64_St6_Reserved1
        _m078 uint32_t                                      amd64_st6_reserved2;            //{ +0x018c    } | .AMD64_St6_Reserved2
        _m079 uint64_t                                      x15;                            //{ +0x0190    } | .X15
        _m080 uint16_t                                      x17_3;                          //{ +0x0198    } | .X17_3
        _m081 uint16_t                                      amd64_st7_reserved1;            //{ +0x019a    } | .AMD64_St7_Reserved1
        _m082 uint32_t                                      amd64_st7_reserved2;            //{ +0x019c    } | .AMD64_St7_Reserved2
        _m083 sdk::array<union win::arm64_nt_neon128_t, 16> v;                              //{ +0x01a0    } | .V
        _m084 sdk::array<uint8_t, 96>                       amd64_xsave_format_reserved4;   //{ +0x02a0    } | .AMD64_XSAVE_FORMAT_Reserved4
        _m085 sdk::array<union win::arm64_nt_neon128_t, 26> amd64_vector_register;          //{ +0x0300    } | .AMD64_VectorRegister
        _m086 uint64_t                                      amd64_vector_control;           //{ +0x04a0    } | .AMD64_VectorControl
        _m087 uint64_t                                      amd64_debug_control;            //{ +0x04a8    } | .AMD64_DebugControl
        _m088 uint64_t                                      amd64_last_branch_to_rip;       //{ +0x04b0    } | .AMD64_LastBranchToRip
        _m089 uint64_t                                      amd64_last_branch_from_rip;     //{ +0x04b8    } | .AMD64_LastBranchFromRip
        _m090 uint64_t                                      amd64_last_exception_to_rip;    //{ +0x04c0    } | .AMD64_LastExceptionToRip
        _m091 uint64_t                                      amd64_last_exception_from_rip;  //{ +0x04c8    } | .AMD64_LastExceptionFromRip
                                                                                          
        SDK_MAGIC_PROPERTIES( "_ARM64EC_NT_CONTEXT.$", 0x0, false, 0xda8a3a14ae0c54f5 );                              
        SDK_FIXED_SIZE( arm64ec_nt_context_t, 0x4d0 );                                    
    };                                                                                    
};
#include "magic/arm64ec_nt_context_t.end.hpp"
SDK_VERIFY( struct win::arm64ec_nt_context_t, 0x4d0 );
