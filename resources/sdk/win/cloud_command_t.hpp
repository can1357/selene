#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cloud_command_t.start.hpp"
namespace win
{
    // [struct _CLOUD_COMMAND]
    // => Windows 10 v1607
    //
    struct cloud_command_t                                                      
    {                                                                           
        struct u0_initiate_recall_t                                             
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m02 int64_t recall_offset;                                           //{ +0x0000    } | .RecallOffset
            _m03 int64_t recall_length;                                           //{ +0x0008    } | .RecallLength
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.InitiateRecall.$", 0x0, false, 0xc4f24e213f7f4a6e );                                          
            SDK_FIXED_SIZE( u0_initiate_recall_t, 0x10 );                                          
        };                                                                      
                                                                                
        struct u1_deflate_t                                                     
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m05 int64_t deflate_offset;                                          //{ +0x0000    } | .DeflateOffset
            _m06 int64_t deflate_length;                                          //{ +0x0008    } | .DeflateLength
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.Deflate.$", 0x0, false, 0xc664d302a2d4e004 );                                           
            SDK_FIXED_SIZE( u1_deflate_t, 0x10 );                                           
        };                                                                      
                                                                                
        struct u2_update_placeholder_identity_t                                 
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m08 int64_t  new_server_file_size;                                   //{ +0x0000    } | .NewServerFileSize
            _m09 uint32_t file_identity_offset;                                   //{ +0x0008    } | .FileIdentityOffset
            _m10 uint32_t file_identity_length;                                   //{ +0x000c    } | .FileIdentityLength
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.UpdatePlaceholderIdentity.$", 0x0, false, 0xa0b5ef3b02da3973 );                                                 
            SDK_FIXED_SIZE( u2_update_placeholder_identity_t, 0x10 );                                                 
        };                                                                      
                                                                                
        struct u3_create_service_identity_t                                     
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m12 void*    service_identity;                                       //{ +0x0000    } | .ServiceIdentity
            _m13 uint64_t alignment;                                              //{ +0x0000    } | .Alignment
            _m14 uint32_t length;                                                 //{ +0x0008    } | .Length
            _m15 uint32_t flags;                                                  //{ +0x000c    } | .Flags
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.CreateServiceIdentity.$", 0x0, false, 0x9ea6b1abb99f4dbe );                                             
            SDK_FIXED_SIZE( u3_create_service_identity_t, 0x10 );                                             
        };                                                                      
                                                                                
        struct u4_connect_service_identity_t                                    
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m17 void*    service_identity;                                       //{ +0x0000    } | .ServiceIdentity
            _m18 uint64_t alignment;                                              //{ +0x0000    } | .Alignment
            _m19 uint32_t length;                                                 //{ +0x0008    } | .Length
            _m20 uint32_t flags;                                                  //{ +0x000c    } | .Flags
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.ConnectServiceIdentity.$", 0x0, false, 0xa45f0eead9d12771 );                                             
            SDK_FIXED_SIZE( u4_connect_service_identity_t, 0x10 );                                             
        };                                                                      
                                                                                
        struct u5_delete_service_identity_t                                     
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m22 void*    service_identity;                                       //{ +0x0000    } | .ServiceIdentity
            _m23 uint64_t alignment;                                              //{ +0x0000    } | .Alignment
            _m24 uint32_t length;                                                 //{ +0x0008    } | .Length
            _m25 uint32_t flags;                                                  //{ +0x000c    } | .Flags
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.DeleteServiceIdentity.$", 0x0, false, 0x5877716b1198606d );                                             
            SDK_FIXED_SIZE( u5_delete_service_identity_t, 0x10 );                                             
        };                                                                      
                                                                                
        struct u6_property_operation_t                                          
        {                                                                       
            // Windows 10 v1607                                                      
            //                                                                  
            _m27 uint32_t first_blob_context_offset;                              //{ +0x0000    } | .FirstBlobContextOffset
            _m28 uint32_t blob_count;                                             //{ +0x0004    } | .BlobCount
            _m29 int64_t  timeout;                                                //{ +0x0008    } | .Timeout
            _m30 uint32_t flags;                                                  //{ +0x0010    } | .Flags
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.PropertyOperation.$", 0x0, false, 0xd95d2e3388206b83 );                                                      
            SDK_FIXED_SIZE( u6_property_operation_t, 0x18 );                                                      
        };                                                                      
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 uint32_t                               version;                      //{ +0x0000    } | .Version
        _m01 uint32_t                               command_code;                 //{ +0x0004    } | .CommandCode
        _m04 u0_initiate_recall_t                   initiate_recall;              //{ +0x0008    } | .InitiateRecall
        _m07 u1_deflate_t                           deflate;                      //{ +0x0008    } | .Deflate
        _m11 u2_update_placeholder_identity_t       update_placeholder_identity;  //{ +0x0008    } | .UpdatePlaceholderIdentity
        _m16 u3_create_service_identity_t           create_service_identity;      //{ +0x0008    } | .CreateServiceIdentity
        _m21 u4_connect_service_identity_t          connect_service_identity;     //{ +0x0008    } | .ConnectServiceIdentity
        _m26 u5_delete_service_identity_t           delete_service_identity;      //{ +0x0008    } | .DeleteServiceIdentity
        _m31 u6_property_operation_t                property_operation;           //{ +0x0008    } | .PropertyOperation
                                                                                
        SDK_MAGIC_PROPERTIES( "_CLOUD_COMMAND.$", 0x0, false, 0x481279f9c7323313 );                            
        SDK_FIXED_SIZE( cloud_command_t, 0x20 );                                
    };                                                                          
};
#include "magic/cloud_command_t.end.hpp"
SDK_VERIFY( struct win::cloud_command_t::u0_initiate_recall_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u1_deflate_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u2_update_placeholder_identity_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u3_create_service_identity_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u4_connect_service_identity_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u5_delete_service_identity_t, 0x10 );
SDK_VERIFY( struct win::cloud_command_t::u6_property_operation_t, 0x18 );
SDK_VERIFY( struct win::cloud_command_t, 0x20 );
