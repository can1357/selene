#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_remote_protocol_information_t.start.hpp"
namespace win
{
    // [struct _FILE_REMOTE_PROTOCOL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_remote_protocol_information_t                                      
    {                                                                              
        struct u0_generic_reserved_t                                               
        {                                                                          
                                                                                   
            SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.GenericReserved.$", 0x20, true, 0x4b3c0324180f43d0 );                       
            SDK_FIXED_SIZE( u0_generic_reserved_t, 0x20 );                         
        };                                                                         
                                                                                   
        union u5_protocol_specific_t                                               
        {                                                                          
            struct u10_smb2_t                                                      
            {                                                                      
                struct u15_server_t                                                
                {                                                                  
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
                    //                                                             
                    _m08 uint32_t capabilities;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                                                                                   
                    SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Server.$", 0x4, true, 0x69d7007defada6a7 );                                                
                    SDK_FIXED_SIZE( u15_server_t, 0x4 );                                                
                };                                                                 
                                                                                   
                struct u20_share_t                                                 
                {                                                                  
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                    //                                                             
                    _m10 uint32_t capabilities;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                    _m11 uint32_t caching_flags;                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CachingFlags
                                                                                   
                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                    //                                                             
                    _m12 uint8_t  share_type;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ShareType
                                                                                   
                    SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.Share.$", 0x10, true, 0xcfd4329360944d58 );                                                 
                    SDK_DYNAMIC_SIZE( u20_share_t );                                                 
                };                                                                 
                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
                //                                                                 
                _m09 u15_server_t               server;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Server
                _m13 u20_share_t                share;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Share
                                                                                   
                SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.Smb2.$", 0x14, true, 0x891bcece59d0dd16 );                                   
                SDK_DYNAMIC_SIZE( u10_smb2_t );                                    
            };                                                                     
                                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                                     
            _m14 u10_smb2_t                            smb2;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Smb2
                                                                                   
            SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.ProtocolSpecific.$", 0x40, true, 0x2d52ea9516cdf482 );                            
            SDK_FIXED_SIZE( u5_protocol_specific_t, 0x40 );                            
        };                                                                         
                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 uint16_t                                       structure_version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureVersion
        _m01 uint16_t                                       structure_size;          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StructureSize
        _m02 uint32_t                                       protocol;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Protocol
        _m03 uint16_t                                       protocol_major_version;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtocolMajorVersion
        _m04 uint16_t                                       protocol_minor_version;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .ProtocolMinorVersion
        _m05 uint16_t                                       protocol_revision;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ProtocolRevision
        _m06 uint32_t                                       flags;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m07 u0_generic_reserved_t                          generic_reserved;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .GenericReserved
        _m15 u5_protocol_specific_t                         protocol_specific;       //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .ProtocolSpecific
                                                                                   
        SDK_NONVOL_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFORMATION.$", 0x74, true, 0xb5ac2da81f460128 );                       
        SDK_FIXED_SIZE( file_remote_protocol_information_t, 0x74 );                       
    };                                                                             
};
#include "magic/file_remote_protocol_information_t.end.hpp"
SDK_VERIFY( struct win::file_remote_protocol_information_t::u0_generic_reserved_t, 0x20 );
SDK_VERIFY( struct win::file_remote_protocol_information_t::u5_protocol_specific_t::u10_smb2_t::u15_server_t, 0x4 );
SDK_VERIFY( union win::file_remote_protocol_information_t::u5_protocol_specific_t, 0x40 );
SDK_VERIFY( struct win::file_remote_protocol_information_t, 0x74 );
