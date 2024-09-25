#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/x86_ktrap_frame_t.start.hpp"
namespace nt
{
    // [struct _X86_KTRAP_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x86_ktrap_frame_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                    
        _m000 uint32_t dbg_ebp;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DbgEbp
        _m001 uint32_t dbg_eip;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DbgEip
        _m002 uint32_t dbg_arg_mark;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DbgArgMark
        _m003 uint32_t dbg_arg_pointer;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DbgArgPointer
        _m004 uint32_t temp_seg_cs;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TempSegCs
        _m005 uint32_t temp_esp;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TempEsp
        _m006 uint32_t dr0;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Dr0
        _m007 uint32_t dr1;                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Dr1
        _m008 uint32_t dr2;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Dr2
        _m009 uint32_t dr3;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Dr3
        _m010 uint32_t dr6;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Dr6
        _m011 uint32_t dr7;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Dr7
        _m012 uint32_t seg_gs;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SegGs
        _m013 uint32_t seg_es;                  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .SegEs
        _m014 uint32_t seg_ds;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SegDs
        _m015 uint32_t edx;                     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Edx
        _m016 uint32_t ecx;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Ecx
        _m017 uint32_t eax;                     //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Eax
        _m018 uint8_t  previous_previous_mode;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PreviousPreviousMode
        _m019 uint8_t  entropy_queue_dpc;       //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .EntropyQueueDpc
        _m020 uint32_t exception_list;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ExceptionList
        _m021 uint32_t seg_fs;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SegFs
        _m022 uint32_t edi;                     //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Edi
        _m023 uint32_t esi;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Esi
        _m024 uint32_t ebx;                     //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .Ebx
        _m025 uint32_t ebp;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Ebp
        _m026 uint32_t err_code;                //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .ErrCode
        _m027 uint32_t eip;                     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Eip
        _m028 uint32_t seg_cs;                  //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .SegCs
        _m029 uint32_t e_flags;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .EFlags
        _m030 uint32_t hardware_esp;            //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .HardwareEsp
        _m031 uint32_t hardware_seg_ss;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HardwareSegSs
        _m032 uint32_t v86_es;                  //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .V86Es
        _m033 uint32_t v86_ds;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .V86Ds
        _m034 uint32_t v86_fs;                  //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .V86Fs
        _m035 uint32_t v86_gs;                  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .V86Gs
                                              
        SDK_MAGIC_PROPERTIES( "_X86_KTRAP_FRAME.$", 0x8c, true, 0x91664c90deeae1b3 );                       
        SDK_FIXED_SIZE( x86_ktrap_frame_t, 0x8c );                       
    };                                        
};
#include "magic/x86_ktrap_frame_t.end.hpp"
SDK_VERIFY( struct nt::x86_ktrap_frame_t, 0x8c );
