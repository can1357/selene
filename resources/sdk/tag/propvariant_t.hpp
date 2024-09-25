#pragma once
#include <sdkgen/support_library.hpp>
#include "cy_t.hpp"
#include "cac_t.hpp"
#include "cah_t.hpp"
#include "cai_t.hpp"
#include "cal_t.hpp"
#include "dec_t.hpp"
#include "blob_t.hpp"
#include "cacy_t.hpp"
#include "caub_t.hpp"
#include "cauh_t.hpp"
#include "caui_t.hpp"
#include "caul_t.hpp"
#include "cadbl_t.hpp"
#include "caflt_t.hpp"
#include "cabool_t.hpp"
#include "cabstr_t.hpp"
#include "cadate_t.hpp"
#include "caclsid_t.hpp"
#include "calpstr_t.hpp"
#include "cascode_t.hpp"
#include "bstrblob_t.hpp"
#include "calpwstr_t.hpp"
#include "cabstrblob_t.hpp"
#include "caclipdata_t.hpp"
#include "cafiletime_t.hpp"
#include "capropvariant_t.hpp"
#include "../win/filetime_t.hpp"

namespace nt  { struct guid_t;       }
namespace win { struct i_dispatch_t; }
namespace win { struct i_storage_t;  }
namespace win { struct i_stream_t;   }
namespace win { struct i_unknown_t;  }

#include "magic/propvariant_t.start.hpp"
namespace tag
{
    struct clipdata_t;
    struct safearray_t;
    struct propvariant_t;
    struct versioned_stream_t;

    // [struct tagPROPVARIANT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct propvariant_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m000 uint16_t                        vt;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .vt
        _m001 uint16_t                        w_reserved1;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wReserved1
        _m002 uint16_t                        w_reserved2;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wReserved2
        _m003 uint16_t                        w_reserved3;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wReserved3
        _m004 char                            c_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cVal
        _m005 uint8_t                         b_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bVal
        _m006 int16_t                         i_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iVal
        _m007 uint16_t                        ui_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uiVal
        _m008 int32_t                         l_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lVal
        _m009 uint32_t                        ul_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulVal
        _m010 int32_t                         int_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .intVal
        _m011 uint32_t                        uint_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uintVal
        _m012 int64_t                         h_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hVal
        _m013 uint64_t                        uh_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uhVal
        _m014 float                           flt_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fltVal
        _m015 double                          dbl_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dblVal
        _m016 int16_t                         bool_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .boolVal
        _m017 int32_t                         scode;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .scode
        _m018 union tag::cy_t                 cy_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cyVal
        _m019 double                          date;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .date
        _m020 struct win::filetime_t          filetime;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .filetime
        _m021 struct nt::guid_t*              puuid;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .puuid
        _m022 struct tag::clipdata_t*         pclipdata;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pclipdata
        _m023 wchar_t*                        bstr_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bstrVal
        _m024 struct tag::bstrblob_t          bstrblob_val;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bstrblobVal
        _m025 struct tag::blob_t              blob;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .blob
        _m026 char*                           psz_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszVal
        _m027 wchar_t*                        pwsz_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszVal
        _m028 struct win::i_unknown_t*        punk_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .punkVal
        _m029 struct win::i_dispatch_t*       pdisp_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdispVal
        _m030 struct win::i_stream_t*         p_stream;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStream
        _m031 struct win::i_storage_t*        p_storage;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStorage
        _m032 struct tag::versioned_stream_t* p_versioned_stream;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pVersionedStream
        _m033 struct tag::safearray_t*        parray;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .parray
        _m034 struct tag::cac_t               cac;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cac
        _m035 struct tag::caub_t              caub;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .caub
        _m036 struct tag::cai_t               cai;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cai
        _m037 struct tag::caui_t              caui;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .caui
        _m038 struct tag::cal_t               cal;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cal
        _m039 struct tag::caul_t              caul;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .caul
        _m040 struct tag::cah_t               cah;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cah
        _m041 struct tag::cauh_t              cauh;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cauh
        _m042 struct tag::caflt_t             caflt;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .caflt
        _m043 struct tag::cadbl_t             cadbl;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cadbl
        _m044 struct tag::cabool_t            cabool;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cabool
        _m045 struct tag::cascode_t           cascode;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cascode
        _m046 struct tag::cacy_t              cacy;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cacy
        _m047 struct tag::cadate_t            cadate;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cadate
        _m048 struct tag::cafiletime_t        cafiletime;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cafiletime
        _m049 struct tag::caclsid_t           cauuid;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cauuid
        _m050 struct tag::caclipdata_t        caclipdata;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .caclipdata
        _m051 struct tag::cabstr_t            cabstr;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cabstr
        _m052 struct tag::cabstrblob_t        cabstrblob;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cabstrblob
        _m053 struct tag::calpstr_t           calpstr;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .calpstr
        _m054 struct tag::calpwstr_t          calpwstr;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .calpwstr
        _m055 struct tag::capropvariant_t     capropvar;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .capropvar
        _m056 char*                           pc_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pcVal
        _m057 uint8_t*                        pb_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbVal
        _m058 int16_t*                        pi_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .piVal
        _m059 uint16_t*                       pui_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .puiVal
        _m060 int32_t*                        pl_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .plVal
        _m061 uint32_t*                       pul_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pulVal
        _m062 int32_t*                        pint_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pintVal
        _m063 uint32_t*                       puint_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .puintVal
        _m064 float*                          pflt_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfltVal
        _m065 double*                         pdbl_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdblVal
        _m066 int16_t*                        pbool_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pboolVal
        _m067 struct tag::dec_t*              pdec_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdecVal
        _m068 int32_t*                        pscode;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pscode
        _m069 union tag::cy_t*                pcy_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pcyVal
        _m070 double*                         pdate;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdate
        _m071 wchar_t**                       pbstr_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbstrVal
        _m072 struct win::i_unknown_t**       ppunk_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppunkVal
        _m073 struct win::i_dispatch_t**      ppdisp_val;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppdispVal
        _m074 struct tag::safearray_t**       pparray;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pparray
        _m075 struct tag::propvariant_t*      pvar_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvarVal
        _m076 struct tag::dec_t               dec_val;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .decVal
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m077 int16_t                         obsolete_variant_bool;  //{ +0x0008    +0x0008    +0x0008    } | .__OBSOLETE__VARIANT_BOOL
                                                                    
        SDK_MAGIC_PROPERTIES( "tagPROPVARIANT.$", 0x18, true, 0x1468e43a7ba34fd0 );                      
        SDK_FIXED_SIZE( propvariant_t, 0x18 );                      
    };                                                              
};
#include "magic/propvariant_t.end.hpp"
SDK_VERIFY( struct tag::propvariant_t, 0x18 );
