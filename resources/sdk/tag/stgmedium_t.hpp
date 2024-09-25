#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbitmap_t;      }
namespace win { struct henhmetafile_t; }
namespace win { struct i_storage_t;    }
namespace win { struct i_stream_t;     }
namespace win { struct i_unknown_t;    }

#include "magic/stgmedium_t.start.hpp"
namespace tag
{
    // [struct tagSTGMEDIUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stgmedium_t                                     
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m00 uint32_t                    tymed;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tymed
        _m01 struct win::hbitmap_t*      h_bitmap;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hBitmap
        _m02 void*                       h_meta_file_pict;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hMetaFilePict
        _m03 struct win::henhmetafile_t* h_enh_meta_file;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hEnhMetaFile
        _m04 void*                       h_global;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hGlobal
        _m05 wchar_t*                    lpsz_file_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszFileName
        _m06 struct win::i_stream_t*     pstm;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pstm
        _m07 struct win::i_storage_t*    pstg;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pstg
        _m08 struct win::i_unknown_t*    p_unk_for_release;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pUnkForRelease
                                                           
        SDK_MAGIC_PROPERTIES( "tagSTGMEDIUM.$", 0x18, true, 0x2f5974ab58ee0118 );                  
        SDK_FIXED_SIZE( stgmedium_t, 0x18 );                  
    };                                                     
};
#include "magic/stgmedium_t.end.hpp"
SDK_VERIFY( struct tag::stgmedium_t, 0x18 );
