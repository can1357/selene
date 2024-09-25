#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vxd_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_VXD_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vxd_header_t                                
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m000 uint16_t                e32_magic;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e32_magic
        _m001 uint8_t                 e32_border;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .e32_border
        _m002 uint8_t                 e32_worder;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .e32_worder
        _m003 uint32_t                e32_level;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .e32_level
        _m004 uint16_t                e32_cpu;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .e32_cpu
        _m005 uint16_t                e32_os;            //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .e32_os
        _m006 uint32_t                e32_ver;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .e32_ver
        _m007 uint32_t                e32_mflags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .e32_mflags
        _m008 uint32_t                e32_mpages;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .e32_mpages
        _m009 uint32_t                e32_startobj;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .e32_startobj
        _m010 uint32_t                e32_eip;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .e32_eip
        _m011 uint32_t                e32_stackobj;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .e32_stackobj
        _m012 uint32_t                e32_esp;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .e32_esp
        _m013 uint32_t                e32_pagesize;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .e32_pagesize
        _m014 uint32_t                e32_lastpagesize;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .e32_lastpagesize
        _m015 uint32_t                e32_fixupsize;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .e32_fixupsize
        _m016 uint32_t                e32_fixupsum;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .e32_fixupsum
        _m017 uint32_t                e32_ldrsize;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .e32_ldrsize
        _m018 uint32_t                e32_ldrsum;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .e32_ldrsum
        _m019 uint32_t                e32_objtab;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .e32_objtab
        _m020 uint32_t                e32_objcnt;        //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .e32_objcnt
        _m021 uint32_t                e32_objmap;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .e32_objmap
        _m022 uint32_t                e32_itermap;       //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .e32_itermap
        _m023 uint32_t                e32_rsrctab;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .e32_rsrctab
        _m024 uint32_t                e32_rsrccnt;       //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .e32_rsrccnt
        _m025 uint32_t                e32_restab;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .e32_restab
        _m026 uint32_t                e32_enttab;        //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .e32_enttab
        _m027 uint32_t                e32_dirtab;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .e32_dirtab
        _m028 uint32_t                e32_dircnt;        //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .e32_dircnt
        _m029 uint32_t                e32_fpagetab;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .e32_fpagetab
        _m030 uint32_t                e32_frectab;       //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .e32_frectab
        _m031 uint32_t                e32_impmod;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .e32_impmod
        _m032 uint32_t                e32_impmodcnt;     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .e32_impmodcnt
        _m033 uint32_t                e32_impproc;       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .e32_impproc
        _m034 uint32_t                e32_pagesum;       //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .e32_pagesum
        _m035 uint32_t                e32_datapage;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .e32_datapage
        _m036 uint32_t                e32_preload;       //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .e32_preload
        _m037 uint32_t                e32_nrestab;       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .e32_nrestab
        _m038 uint32_t                e32_cbnrestab;     //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .e32_cbnrestab
        _m039 uint32_t                e32_nressum;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .e32_nressum
        _m040 uint32_t                e32_autodata;      //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .e32_autodata
        _m041 uint32_t                e32_debuginfo;     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .e32_debuginfo
        _m042 uint32_t                e32_debuglen;      //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .e32_debuglen
        _m043 uint32_t                e32_instpreload;   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .e32_instpreload
        _m044 uint32_t                e32_instdemand;    //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .e32_instdemand
        _m045 uint32_t                e32_heapsize;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .e32_heapsize
        _m046 sdk::array<uint8_t, 12> e32_res3;          //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .e32_res3
        _m047 uint32_t                e32_winresoff;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .e32_winresoff
        _m048 uint32_t                e32_winreslen;     //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .e32_winreslen
        _m049 uint16_t                e32_devid;         //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .e32_devid
        _m050 uint16_t                e32_ddkver;        //{ +0x00c2    +0x00c2    +0x00c2    +0x00c2    } | .e32_ddkver
                                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_VXD_HEADER.$", 0xc4, true, 0x2eae9af8858a43d4 );                 
        SDK_FIXED_SIZE( vxd_header_t, 0xc4 );                 
    };                                                 
};
#include "magic/vxd_header_t.end.hpp"
SDK_VERIFY( struct image::vxd_header_t, 0xc4 );
