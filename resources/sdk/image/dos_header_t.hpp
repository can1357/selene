#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dos_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DOS_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dos_header_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 uint16_t                 e_magic;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e_magic
        _m01 uint16_t                 e_cblp;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .e_cblp
        _m02 uint16_t                 e_cp;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .e_cp
        _m03 uint16_t                 e_crlc;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .e_crlc
        _m04 uint16_t                 e_cparhdr;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .e_cparhdr
        _m05 uint16_t                 e_minalloc;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .e_minalloc
        _m06 uint16_t                 e_maxalloc;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .e_maxalloc
        _m07 uint16_t                 e_ss;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .e_ss
        _m08 uint16_t                 e_sp;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .e_sp
        _m09 uint16_t                 e_csum;      //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .e_csum
        _m10 uint16_t                 e_ip;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .e_ip
        _m11 uint16_t                 e_cs;        //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .e_cs
        _m12 uint16_t                 e_lfarlc;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .e_lfarlc
        _m13 uint16_t                 e_ovno;      //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .e_ovno
        _m14 sdk::array<uint16_t, 4>  e_res;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .e_res
        _m15 uint16_t                 e_oemid;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .e_oemid
        _m16 uint16_t                 e_oeminfo;   //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .e_oeminfo
        _m17 sdk::array<uint16_t, 10> e_res2;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .e_res2
        _m18 int32_t                  e_lfanew;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .e_lfanew
                                                 
        SDK_MAGIC_PROPERTIES( "_IMAGE_DOS_HEADER.$", 0x40, true, 0xb5c556f3ce67a3a1 );           
        SDK_FIXED_SIZE( dos_header_t, 0x40 );           
    };                                           
};
#include "magic/dos_header_t.end.hpp"
SDK_VERIFY( struct image::dos_header_t, 0x40 );
