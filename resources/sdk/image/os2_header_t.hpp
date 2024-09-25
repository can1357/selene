#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/os2_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_OS2_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct os2_header_t                
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m000 uint16_t ne_magic;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ne_magic
        _m001 char     ne_ver;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ne_ver
        _m002 char     ne_rev;           //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .ne_rev
        _m003 uint16_t ne_enttab;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ne_enttab
        _m004 uint16_t ne_cbenttab;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ne_cbenttab
        _m005 int32_t  ne_crc;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ne_crc
        _m006 uint16_t ne_flags;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ne_flags
        _m007 uint16_t ne_autodata;      //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ne_autodata
        _m008 uint16_t ne_heap;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ne_heap
        _m009 uint16_t ne_stack;         //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ne_stack
        _m010 int32_t  ne_csip;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ne_csip
        _m011 int32_t  ne_sssp;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ne_sssp
        _m012 uint16_t ne_cseg;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ne_cseg
        _m013 uint16_t ne_cmod;          //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .ne_cmod
        _m014 uint16_t ne_cbnrestab;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ne_cbnrestab
        _m015 uint16_t ne_segtab;        //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .ne_segtab
        _m016 uint16_t ne_rsrctab;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ne_rsrctab
        _m017 uint16_t ne_restab;        //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .ne_restab
        _m018 uint16_t ne_modtab;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ne_modtab
        _m019 uint16_t ne_imptab;        //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .ne_imptab
        _m020 int32_t  ne_nrestab;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ne_nrestab
        _m021 uint16_t ne_cmovent;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ne_cmovent
        _m022 uint16_t ne_align;         //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .ne_align
        _m023 uint16_t ne_cres;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ne_cres
        _m024 uint8_t  ne_exetyp;        //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .ne_exetyp
        _m025 uint8_t  ne_flagsothers;   //{ +0x0037    +0x0037    +0x0037    +0x0037    } | .ne_flagsothers
        _m026 uint16_t ne_pretthunks;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ne_pretthunks
        _m027 uint16_t ne_psegrefbytes;  //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .ne_psegrefbytes
        _m028 uint16_t ne_swaparea;      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ne_swaparea
        _m029 uint16_t ne_expver;        //{ +0x003e    +0x003e    +0x003e    +0x003e    } | .ne_expver
                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_OS2_HEADER.$", 0x40, true, 0x3e9495ab34ec9fd4 );                
        SDK_FIXED_SIZE( os2_header_t, 0x40 );                
    };                                 
};
#include "magic/os2_header_t.end.hpp"
SDK_VERIFY( struct image::os2_header_t, 0x40 );
