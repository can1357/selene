#pragma once
#include <sdkgen/support_library.hpp>
#include "stdobjref_t.hpp"
#include "../nt/guid_t.hpp"
#include "dualstringarray_t.hpp"

#include "magic/objref_t.start.hpp"
namespace tag
{
    struct objrefdata_t;

    // [struct tagOBJREF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct objref_t                                                                 
    {                                                                               
        union u0_u_objref_t                                                         
        {                                                                           
            struct u4_u_standard_t                                                  
            {                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
                //                                                                  
                _m03 struct tag::stdobjref_t       std;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .std
                _m04 struct tag::dualstringarray_t sa_res_addr;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .saResAddr
                                                                                    
                SDK_MAGIC_PROPERTIES( "tagOBJREF.u_objref.u_standard.$", 0x30, true, 0xdcb95f135527e847 );                                 
                SDK_FIXED_SIZE( u4_u_standard_t, 0x30 );                                 
            };                                                                      
                                                                                    
            struct u8_u_handler_t                                                   
            {                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
                //                                                                  
                _m06 struct tag::stdobjref_t       std;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .std
                _m07 struct nt::guid_t             clsid;                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .clsid
                _m08 struct tag::dualstringarray_t sa_res_addr;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .saResAddr
                                                                                    
                SDK_MAGIC_PROPERTIES( "tagOBJREF.u_objref.u_handler.$", 0x40, true, 0x1c15c24d3559578a );                                 
                SDK_FIXED_SIZE( u8_u_handler_t, 0x40 );                                 
            };                                                                      
                                                                                    
            struct u12_u_custom_t                                                   
            {                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                //                                                                  
                _m10 struct nt::guid_t clsid;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
                _m11 uint32_t          cb_extension;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbExtension
                _m12 uint32_t          size;                                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .size
                _m13 uint8_t*          p_data;                                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pData
                                                                                    
                SDK_MAGIC_PROPERTIES( "tagOBJREF.u_objref.u_custom.$", 0x20, true, 0x85adc4e082941084 );                                  
                SDK_FIXED_SIZE( u12_u_custom_t, 0x20 );                                  
            };                                                                      
                                                                                    
            struct u16_u_extended_t                                                 
            {                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
                //                                                                  
                _m15 struct tag::stdobjref_t       std;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .std
                _m16 struct tag::objrefdata_t*     p_or_data;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pORData
                _m17 struct tag::dualstringarray_t sa_res_addr;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .saResAddr
                                                                                    
                SDK_MAGIC_PROPERTIES( "tagOBJREF.u_objref.u_extended.$", 0x38, true, 0xd748ff0c8d0fdf53 );                                 
                SDK_FIXED_SIZE( u16_u_extended_t, 0x38 );                                 
            };                                                                      
                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                                      
            _m05 u4_u_standard_t                               u_standard;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .u_standard
            _m09 u8_u_handler_t                                u_handler;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .u_handler
            _m14 u12_u_custom_t                                u_custom;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .u_custom
            _m18 u16_u_extended_t                              u_extended;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .u_extended
                                                                                    
            SDK_MAGIC_PROPERTIES( "tagOBJREF.u_objref.$", 0x40, true, 0x84e06d0abd07b844 );                     
            SDK_FIXED_SIZE( u0_u_objref_t, 0x40 );                                  
        };                                                                          
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                                          
        _m00 uint32_t                                                     signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .signature
        _m01 uint32_t                                                     flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 struct nt::guid_t                                            iid;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iid
        _m19 u0_u_objref_t                                                u_objref;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .u_objref
                                                                                    
        SDK_MAGIC_PROPERTIES( "tagOBJREF.$", 0x58, true, 0x90e1a5b597b57957 );          
        SDK_FIXED_SIZE( objref_t, 0x58 );                                           
    };                                                                              
};
#include "magic/objref_t.end.hpp"
SDK_VERIFY( struct tag::objref_t::u0_u_objref_t::u4_u_standard_t, 0x30 );
SDK_VERIFY( struct tag::objref_t::u0_u_objref_t::u8_u_handler_t, 0x40 );
SDK_VERIFY( struct tag::objref_t::u0_u_objref_t::u12_u_custom_t, 0x20 );
SDK_VERIFY( struct tag::objref_t::u0_u_objref_t::u16_u_extended_t, 0x38 );
SDK_VERIFY( union tag::objref_t::u0_u_objref_t, 0x40 );
SDK_VERIFY( struct tag::objref_t, 0x58 );
