#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/whea128a_t.hpp"

#include "magic/x64_register_state_t.start.hpp"
namespace whea
{
    // [struct _WHEA_X64_REGISTER_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct x64_register_state_t             
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m000 uint64_t               rax;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Rax
        _m001 uint64_t               rbx;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Rbx
        _m002 uint64_t               rcx;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Rcx
        _m003 uint64_t               rdx;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Rdx
        _m004 uint64_t               rsi;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Rsi
        _m005 uint64_t               rdi;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Rdi
        _m006 uint64_t               rbp;     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Rbp
        _m007 uint64_t               rsp;     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Rsp
        _m008 uint64_t               r8;      //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .R8
        _m009 uint64_t               r9;      //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .R9
        _m010 uint64_t               r10;     //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .R10
        _m011 uint64_t               r11;     //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .R11
        _m012 uint64_t               r12;     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .R12
        _m013 uint64_t               r13;     //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .R13
        _m014 uint64_t               r14;     //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .R14
        _m015 uint64_t               r15;     //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .R15
        _m016 uint16_t               cs;      //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .Cs
        _m017 uint16_t               ds;      //{ +0x0082    +0x0082    +0x0082    +0x0082    +0x0082    } | .Ds
        _m018 uint16_t               ss;      //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .Ss
        _m019 uint16_t               es;      //{ +0x0086    +0x0086    +0x0086    +0x0086    +0x0086    } | .Es
        _m020 uint16_t               fs;      //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .Fs
        _m021 uint16_t               gs;      //{ +0x008a    +0x008a    +0x008a    +0x008a    +0x008a    } | .Gs
        _m022 uint64_t               rflags;  //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .Rflags
        _m023 uint64_t               eip;     //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .Eip
        _m024 uint64_t               cr0;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Cr0
        _m025 uint64_t               cr1;     //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Cr1
        _m026 uint64_t               cr2;     //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Cr2
        _m027 uint64_t               cr3;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Cr3
        _m028 uint64_t               cr4;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Cr4
        _m029 uint64_t               cr8;     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .Cr8
        _m030 struct wdf::whea128a_t gdtr;    //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .Gdtr
        _m031 struct wdf::whea128a_t idtr;    //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .Idtr
        _m032 uint16_t               ldtr;    //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .Ldtr
        _m033 uint16_t               tr;      //{ +0x00f2    +0x00f2    +0x00f2    +0x00f2    +0x00f2    } | .Tr
                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_X64_REGISTER_STATE.$", 0x100, true, 0x5d518f1e7f4c19d7 );       
        SDK_FIXED_SIZE( x64_register_state_t, 0x100 );       
    };                                      
};
#include "magic/x64_register_state_t.end.hpp"
SDK_VERIFY( struct whea::x64_register_state_t, 0x100 );
