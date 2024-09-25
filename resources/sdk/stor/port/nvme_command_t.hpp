#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_cdw10_abort_t.hpp"
#include "nvme_cdw10_identify_t.hpp"
#include "nvme_cdw10_sanitize_t.hpp"
#include "nvme_cdw11_features_t.hpp"
#include "nvme_cdw11_identify_t.hpp"
#include "nvme_cdw11_sanitize_t.hpp"
#include "nvme_cdw12_features_t.hpp"
#include "nvme_cdw13_features_t.hpp"
#include "nvme_cdw14_features_t.hpp"
#include "nvme_cdw15_features_t.hpp"
#include "nvme_command_dword0_t.hpp"
#include "nvme_cdw10_format_nvm_t.hpp"
#include "nvme_cdw12_read_write_t.hpp"
#include "nvme_cdw13_read_write_t.hpp"
#include "nvme_cdw15_read_write_t.hpp"
#include "nvme_cdw10_zone_append_t.hpp"
#include "nvme_cdw12_zone_append_t.hpp"
#include "nvme_cdw15_zone_append_t.hpp"
#include "nvme_cdw10_get_features_t.hpp"
#include "nvme_cdw10_get_log_page_t.hpp"
#include "nvme_cdw10_set_features_t.hpp"
#include "nvme_cdw11_create_io_cq_t.hpp"
#include "nvme_cdw11_create_io_sq_t.hpp"
#include "nvme_cdw11_get_log_page_t.hpp"
#include "nvme_cdw12_get_log_page_t.hpp"
#include "nvme_cdw13_get_log_page_t.hpp"
#include "nvme_cdw14_get_log_page_t.hpp"
#include "nvme_cdw11_security_send_t.hpp"
#include "nvme_cdw10_directive_send_t.hpp"
#include "nvme_cdw11_directive_send_t.hpp"
#include "nvme_cdw12_directive_send_t.hpp"
#include "nvme_cdw10_create_io_queue_t.hpp"
#include "nvme_cdw10_get_log_page_v13_t.hpp"
#include "nvme_cdw11_security_receive_t.hpp"
#include "nvme_cdw10_directive_receive_t.hpp"
#include "nvme_cdw10_firmware_activate_t.hpp"
#include "nvme_cdw10_firmware_download_t.hpp"
#include "nvme_cdw11_directive_receive_t.hpp"
#include "nvme_cdw11_firmware_download_t.hpp"
#include "nvme_cdw12_directive_receive_t.hpp"
#include "nvme_cdw10_dataset_management_t.hpp"
#include "nvme_cdw10_reservation_report_t.hpp"
#include "nvme_cdw11_dataset_management_t.hpp"
#include "nvme_cdw11_reservation_report_t.hpp"
#include "nvme_cdw10_reservation_acquire_t.hpp"
#include "nvme_cdw10_reservation_release_t.hpp"
#include "nvme_cdw10_reservation_register_t.hpp"
#include "nvme_cdw10_zone_management_send_t.hpp"
#include "nvme_cdw13_zone_management_send_t.hpp"
#include "nvme_cdw10_security_send_receive_t.hpp"
#include "nvme_cdw10_zone_management_receive_t.hpp"
#include "nvme_cdw13_zone_management_receive_t.hpp"

#include "magic/nvme_command_t.start.hpp"
namespace stor::port
{
    // [struct NVME_COMMAND]
    // => Windows 11
    //
    struct nvme_command_t                                                                        
    {                                                                                            
        struct u0_general_t                                                                      
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m05 uint32_t cdw10;                                                                   //{ +0x0000    } | .CDW10
            _m06 uint32_t cdw11;                                                                   //{ +0x0004    } | .CDW11
            _m07 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _m08 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _m09 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _m10 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.GENERAL.$", 0x0, false, 0x594581d864c677c9 );                            
            SDK_FIXED_SIZE( u0_general_t, 0x18 );                                                
        };                                                                                       
                                                                                                 
        struct u1_identify_t                                                                     
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m12 union stor::port::nvme_cdw10_identify_t cdw10;                                    //{ +0x0000    } | .CDW10
            _m13 union stor::port::nvme_cdw11_identify_t cdw11;                                    //{ +0x0004    } | .CDW11
            _m14 uint32_t                                cdw12;                                    //{ +0x0008    } | .CDW12
            _m15 uint32_t                                cdw13;                                    //{ +0x000c    } | .CDW13
            _m16 uint32_t                                cdw14;                                    //{ +0x0010    } | .CDW14
            _m17 uint32_t                                cdw15;                                    //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.IDENTIFY.$", 0x0, false, 0x350346565c96fc50 );                            
            SDK_FIXED_SIZE( u1_identify_t, 0x18 );                                               
        };                                                                                       
                                                                                                 
        struct u2_abort_t                                                                        
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m19 union stor::port::nvme_cdw10_abort_t cdw10;                                       //{ +0x0000    } | .CDW10
            _m20 uint32_t                             cdw11;                                       //{ +0x0004    } | .CDW11
            _m21 uint32_t                             cdw12;                                       //{ +0x0008    } | .CDW12
            _m22 uint32_t                             cdw13;                                       //{ +0x000c    } | .CDW13
            _m23 uint32_t                             cdw14;                                       //{ +0x0010    } | .CDW14
            _m24 uint32_t                             cdw15;                                       //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.ABORT.$", 0x0, false, 0x1c458cfd0f19a117 );                            
            SDK_FIXED_SIZE( u2_abort_t, 0x18 );                                                  
        };                                                                                       
                                                                                                 
        struct u3_getfeatures_t                                                                  
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m26 union stor::port::nvme_cdw10_get_features_t cdw10;                                //{ +0x0000    } | .CDW10
            _m27 union stor::port::nvme_cdw11_features_t     cdw11;                                //{ +0x0004    } | .CDW11
            _m28 uint32_t                                    cdw12;                                //{ +0x0008    } | .CDW12
            _m29 uint32_t                                    cdw13;                                //{ +0x000c    } | .CDW13
            _m30 uint32_t                                    cdw14;                                //{ +0x0010    } | .CDW14
            _m31 uint32_t                                    cdw15;                                //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.GETFEATURES.$", 0x0, false, 0x848f45560c654d37 );                            
            SDK_FIXED_SIZE( u3_getfeatures_t, 0x18 );                                            
        };                                                                                       
                                                                                                 
        struct u4_setfeatures_t                                                                  
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m33 union stor::port::nvme_cdw10_set_features_t cdw10;                                //{ +0x0000    } | .CDW10
            _m34 union stor::port::nvme_cdw11_features_t     cdw11;                                //{ +0x0004    } | .CDW11
            _m35 union stor::port::nvme_cdw12_features_t     cdw12;                                //{ +0x0008    } | .CDW12
            _m36 union stor::port::nvme_cdw13_features_t     cdw13;                                //{ +0x000c    } | .CDW13
            _m37 union stor::port::nvme_cdw14_features_t     cdw14;                                //{ +0x0010    } | .CDW14
            _m38 union stor::port::nvme_cdw15_features_t     cdw15;                                //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.SETFEATURES.$", 0x0, false, 0xfb7f9ca684aaaf65 );                            
            SDK_FIXED_SIZE( u4_setfeatures_t, 0x18 );                                            
        };                                                                                       
                                                                                                 
        struct u5_getlogpage_t                                                                   
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m40 union stor::port::nvme_cdw10_get_log_page_t     cdw10;                            //{ +0x0000    } | .CDW10
            _m41 union stor::port::nvme_cdw10_get_log_page_v13_t cdw10_v13;                        //{ +0x0000    } | .CDW10_V13
            _m42 union stor::port::nvme_cdw11_get_log_page_t     cdw11;                            //{ +0x0004    } | .CDW11
            _m43 struct stor::port::nvme_cdw12_get_log_page_t    cdw12;                            //{ +0x0008    } | .CDW12
            _m44 struct stor::port::nvme_cdw13_get_log_page_t    cdw13;                            //{ +0x000c    } | .CDW13
            _m45 union stor::port::nvme_cdw14_get_log_page_t     cdw14;                            //{ +0x0010    } | .CDW14
            _m46 uint32_t                                        cdw15;                            //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.GETLOGPAGE.$", 0x0, false, 0x2b41be13e45d2e4c );                                
            SDK_FIXED_SIZE( u5_getlogpage_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u6_createiocq_t                                                                   
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m48 union stor::port::nvme_cdw10_create_io_queue_t cdw10;                             //{ +0x0000    } | .CDW10
            _m49 union stor::port::nvme_cdw11_create_io_cq_t    cdw11;                             //{ +0x0004    } | .CDW11
            _m50 uint32_t                                       cdw12;                             //{ +0x0008    } | .CDW12
            _m51 uint32_t                                       cdw13;                             //{ +0x000c    } | .CDW13
            _m52 uint32_t                                       cdw14;                             //{ +0x0010    } | .CDW14
            _m53 uint32_t                                       cdw15;                             //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.CREATEIOCQ.$", 0x0, false, 0x44dcee1b93d30ecf );                            
            SDK_FIXED_SIZE( u6_createiocq_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u7_createiosq_t                                                                   
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m55 union stor::port::nvme_cdw10_create_io_queue_t cdw10;                             //{ +0x0000    } | .CDW10
            _m56 union stor::port::nvme_cdw11_create_io_sq_t    cdw11;                             //{ +0x0004    } | .CDW11
            _m57 uint32_t                                       cdw12;                             //{ +0x0008    } | .CDW12
            _m58 uint32_t                                       cdw13;                             //{ +0x000c    } | .CDW13
            _m59 uint32_t                                       cdw14;                             //{ +0x0010    } | .CDW14
            _m60 uint32_t                                       cdw15;                             //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.CREATEIOSQ.$", 0x0, false, 0xeb2bba918fde2d35 );                            
            SDK_FIXED_SIZE( u7_createiosq_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u8_datasetmanagement_t                                                            
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_dataset_management_t;                            
            using cdw11_t = union stor::port::nvme_cdw11_dataset_management_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _m62 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _m63 cdw11_t  cdw11;                                                                   //{ +0x0004    } | .CDW11
            _m64 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _m65 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _m66 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _m67 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.DATASETMANAGEMENT.$", 0x0, false, 0x524a018d2ddef98e );                            
            SDK_FIXED_SIZE( u8_datasetmanagement_t, 0x18 );                                      
        };                                                                                       
                                                                                                 
        struct u9_securitysend_t                                                                 
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_security_send_receive_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _m69 cdw10_t                                       cdw10;                              //{ +0x0000    } | .CDW10
            _m70 struct stor::port::nvme_cdw11_security_send_t cdw11;                              //{ +0x0004    } | .CDW11
            _m71 uint32_t                                      cdw12;                              //{ +0x0008    } | .CDW12
            _m72 uint32_t                                      cdw13;                              //{ +0x000c    } | .CDW13
            _m73 uint32_t                                      cdw14;                              //{ +0x0010    } | .CDW14
            _m74 uint32_t                                      cdw15;                              //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.SECURITYSEND.$", 0x0, false, 0x535f033f8beece84 );                            
            SDK_FIXED_SIZE( u9_securitysend_t, 0x18 );                                           
        };                                                                                       
                                                                                                 
        struct u10_securityreceive_t                                                             
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_security_send_receive_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _m76 cdw10_t                                          cdw10;                           //{ +0x0000    } | .CDW10
            _m77 struct stor::port::nvme_cdw11_security_receive_t cdw11;                           //{ +0x0004    } | .CDW11
            _m78 uint32_t                                         cdw12;                           //{ +0x0008    } | .CDW12
            _m79 uint32_t                                         cdw13;                           //{ +0x000c    } | .CDW13
            _m80 uint32_t                                         cdw14;                           //{ +0x0010    } | .CDW14
            _m81 uint32_t                                         cdw15;                           //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.SECURITYRECEIVE.$", 0x0, false, 0xe38f0c37e28036b );                            
            SDK_FIXED_SIZE( u10_securityreceive_t, 0x18 );                                       
        };                                                                                       
                                                                                                 
        struct u11_firmwaredownload_t                                                            
        {                                                                                        
            using cdw10_t = struct stor::port::nvme_cdw10_firmware_download_t;                            
            using cdw11_t = struct stor::port::nvme_cdw11_firmware_download_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _m83 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _m84 cdw11_t  cdw11;                                                                   //{ +0x0004    } | .CDW11
            _m85 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _m86 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _m87 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _m88 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.FIRMWAREDOWNLOAD.$", 0x0, false, 0x7fe80da88aa26cef );                            
            SDK_FIXED_SIZE( u11_firmwaredownload_t, 0x18 );                                      
        };                                                                                       
                                                                                                 
        struct u12_firmwareactivate_t                                                            
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m90 union stor::port::nvme_cdw10_firmware_activate_t cdw10;                           //{ +0x0000    } | .CDW10
            _m91 uint32_t                                         cdw11;                           //{ +0x0004    } | .CDW11
            _m92 uint32_t                                         cdw12;                           //{ +0x0008    } | .CDW12
            _m93 uint32_t                                         cdw13;                           //{ +0x000c    } | .CDW13
            _m94 uint32_t                                         cdw14;                           //{ +0x0010    } | .CDW14
            _m95 uint32_t                                         cdw15;                           //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.FIRMWAREACTIVATE.$", 0x0, false, 0xe32e76d03f4fa68c );                            
            SDK_FIXED_SIZE( u12_firmwareactivate_t, 0x18 );                                      
        };                                                                                       
                                                                                                 
        struct u13_formatnvm_t                                                                   
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _m97 union stor::port::nvme_cdw10_format_nvm_t cdw10;                                  //{ +0x0000    } | .CDW10
            _m98 uint32_t                                  cdw11;                                  //{ +0x0004    } | .CDW11
            _m99 uint32_t                                  cdw12;                                  //{ +0x0008    } | .CDW12
            _n00 uint32_t                                  cdw13;                                  //{ +0x000c    } | .CDW13
            _n01 uint32_t                                  cdw14;                                  //{ +0x0010    } | .CDW14
            _n02 uint32_t                                  cdw15;                                  //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.FORMATNVM.$", 0x0, false, 0xe1404a30b7550e9c );                            
            SDK_FIXED_SIZE( u13_formatnvm_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u14_directivereceive_t                                                            
        {                                                                                        
            using cdw10_t = struct stor::port::nvme_cdw10_directive_receive_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n04 cdw10_t                                          cdw10;                           //{ +0x0000    } | .CDW10
            _n05 union stor::port::nvme_cdw11_directive_receive_t cdw11;                           //{ +0x0004    } | .CDW11
            _n06 union stor::port::nvme_cdw12_directive_receive_t cdw12;                           //{ +0x0008    } | .CDW12
            _n07 uint32_t                                         cdw13;                           //{ +0x000c    } | .CDW13
            _n08 uint32_t                                         cdw14;                           //{ +0x0010    } | .CDW14
            _n09 uint32_t                                         cdw15;                           //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.DIRECTIVERECEIVE.$", 0x0, false, 0x6919706ef8fe5bd7 );                            
            SDK_FIXED_SIZE( u14_directivereceive_t, 0x18 );                                      
        };                                                                                       
                                                                                                 
        struct u15_directivesend_t                                                               
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _n11 struct stor::port::nvme_cdw10_directive_send_t cdw10;                             //{ +0x0000    } | .CDW10
            _n12 union stor::port::nvme_cdw11_directive_send_t  cdw11;                             //{ +0x0004    } | .CDW11
            _n13 union stor::port::nvme_cdw12_directive_send_t  cdw12;                             //{ +0x0008    } | .CDW12
            _n14 uint32_t                                       cdw13;                             //{ +0x000c    } | .CDW13
            _n15 uint32_t                                       cdw14;                             //{ +0x0010    } | .CDW14
            _n16 uint32_t                                       cdw15;                             //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.DIRECTIVESEND.$", 0x0, false, 0x69f82885567c90ac );                            
            SDK_FIXED_SIZE( u15_directivesend_t, 0x18 );                                         
        };                                                                                       
                                                                                                 
        struct u16_sanitize_t                                                                    
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _n18 union stor::port::nvme_cdw10_sanitize_t cdw10;                                    //{ +0x0000    } | .CDW10
            _n19 union stor::port::nvme_cdw11_sanitize_t cdw11;                                    //{ +0x0004    } | .CDW11
            _n20 uint32_t                                cdw12;                                    //{ +0x0008    } | .CDW12
            _n21 uint32_t                                cdw13;                                    //{ +0x000c    } | .CDW13
            _n22 uint32_t                                cdw14;                                    //{ +0x0010    } | .CDW14
            _n23 uint32_t                                cdw15;                                    //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.SANITIZE.$", 0x0, false, 0x2103e9417e483859 );                            
            SDK_FIXED_SIZE( u16_sanitize_t, 0x18 );                                              
        };                                                                                       
                                                                                                 
        struct u17_readwrite_t                                                                   
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _n25 uint32_t                                  lbalow;                                 //{ +0x0000    } | .LBALOW
            _n26 uint32_t                                  lbahigh;                                //{ +0x0004    } | .LBAHIGH
            _n27 union stor::port::nvme_cdw12_read_write_t cdw12;                                  //{ +0x0008    } | .CDW12
            _n28 union stor::port::nvme_cdw13_read_write_t cdw13;                                  //{ +0x000c    } | .CDW13
            _n29 uint32_t                                  cdw14;                                  //{ +0x0010    } | .CDW14
            _n30 union stor::port::nvme_cdw15_read_write_t cdw15;                                  //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.READWRITE.$", 0x0, false, 0xb42c61f163cec979 );                              
            SDK_FIXED_SIZE( u17_readwrite_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u18_reservationacquire_t                                                          
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_reservation_acquire_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n32 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _n33 uint32_t cdw11;                                                                   //{ +0x0004    } | .CDW11
            _n34 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _n35 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _n36 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _n37 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.RESERVATIONACQUIRE.$", 0x0, false, 0x9d469fcc507d776a );                            
            SDK_FIXED_SIZE( u18_reservationacquire_t, 0x18 );                                    
        };                                                                                       
                                                                                                 
        struct u19_reservationregister_t                                                         
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_reservation_register_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n39 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _n40 uint32_t cdw11;                                                                   //{ +0x0004    } | .CDW11
            _n41 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _n42 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _n43 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _n44 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.RESERVATIONREGISTER.$", 0x0, false, 0x4d1109ade448e1e5 );                            
            SDK_FIXED_SIZE( u19_reservationregister_t, 0x18 );                                   
        };                                                                                       
                                                                                                 
        struct u20_reservationrelease_t                                                          
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_reservation_release_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n46 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _n47 uint32_t cdw11;                                                                   //{ +0x0004    } | .CDW11
            _n48 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _n49 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _n50 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _n51 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.RESERVATIONRELEASE.$", 0x0, false, 0xd7881f97c723beb4 );                            
            SDK_FIXED_SIZE( u20_reservationrelease_t, 0x18 );                                    
        };                                                                                       
                                                                                                 
        struct u21_reservationreport_t                                                           
        {                                                                                        
            using cdw10_t = union stor::port::nvme_cdw10_reservation_report_t;                            
            using cdw11_t = union stor::port::nvme_cdw11_reservation_report_t;                            
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n53 cdw10_t  cdw10;                                                                   //{ +0x0000    } | .CDW10
            _n54 cdw11_t  cdw11;                                                                   //{ +0x0004    } | .CDW11
            _n55 uint32_t cdw12;                                                                   //{ +0x0008    } | .CDW12
            _n56 uint32_t cdw13;                                                                   //{ +0x000c    } | .CDW13
            _n57 uint32_t cdw14;                                                                   //{ +0x0010    } | .CDW14
            _n58 uint32_t cdw15;                                                                   //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.RESERVATIONREPORT.$", 0x0, false, 0xe5d356eaf8e2b48d );                            
            SDK_FIXED_SIZE( u21_reservationreport_t, 0x18 );                                     
        };                                                                                       
                                                                                                 
        struct u22_zonemanagementsend_t                                                          
        {                                                                                        
            using cdw1011_t = struct stor::port::nvme_cdw10_zone_management_send_t;                              
            using cdw13_t =   union stor::port::nvme_cdw13_zone_management_send_t;                              
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n60 cdw1011_t  cdw1011;                                                               //{ +0x0000    } | .CDW1011
            _n61 uint32_t   cdw12;                                                                 //{ +0x0008    } | .CDW12
            _n62 cdw13_t    cdw13;                                                                 //{ +0x000c    } | .CDW13
            _n63 uint32_t   cdw14;                                                                 //{ +0x0010    } | .CDW14
            _n64 uint32_t   cdw15;                                                                 //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.ZONEMANAGEMENTSEND.$", 0x0, false, 0xfe52becf0130d1af );                              
            SDK_FIXED_SIZE( u22_zonemanagementsend_t, 0x18 );                                    
        };                                                                                       
                                                                                                 
        struct u23_zonemanagementreceive_t                                                       
        {                                                                                        
            using cdw1011_t = struct stor::port::nvme_cdw10_zone_management_receive_t;                                 
            using cdw13_t =   union stor::port::nvme_cdw13_zone_management_receive_t;                                 
                                                                                                 
            // Windows 11                                                                        
            //                                                                                   
            _n66 cdw1011_t  cdw1011;                                                               //{ +0x0000    } | .CDW1011
            _n67 uint32_t   dwordcount;                                                            //{ +0x0008    } | .DWORDCOUNT
            _n68 cdw13_t    cdw13;                                                                 //{ +0x000c    } | .CDW13
            _n69 uint32_t   cdw14;                                                                 //{ +0x0010    } | .CDW14
            _n70 uint32_t   cdw15;                                                                 //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.$", 0x0, false, 0x6ffa2155d4d48e5e );                                 
            SDK_FIXED_SIZE( u23_zonemanagementreceive_t, 0x18 );                                 
        };                                                                                       
                                                                                                 
        struct u24_zoneappend_t                                                                  
        {                                                                                        
            // Windows 11                                                                        
            //                                                                                   
            _n72 struct stor::port::nvme_cdw10_zone_append_t cdw1011;                              //{ +0x0000    } | .CDW1011
            _n73 union stor::port::nvme_cdw12_zone_append_t  cdw12;                                //{ +0x0008    } | .CDW12
            _n74 uint32_t                                    cdw13;                                //{ +0x000c    } | .CDW13
            _n75 uint32_t                                    ilbrt;                                //{ +0x0010    } | .ILBRT
            _n76 union stor::port::nvme_cdw15_zone_append_t  cdw15;                                //{ +0x0014    } | .CDW15
                                                                                                 
            SDK_MAGIC_PROPERTIES( "NVME_COMMAND.ZONEAPPEND.$", 0x0, false, 0x8acc5e70ba053f6d );                              
            SDK_FIXED_SIZE( u24_zoneappend_t, 0x18 );                                            
        };                                                                                       
                                                                                                 
        // Windows 11                                                                            
        //                                                                                       
        _m000 union stor::port::nvme_command_dword0_t                      cdw0;                   //{ +0x0000    } | .CDW0
        _m001 uint32_t                                                     nsid;                   //{ +0x0004    } | .NSID
        _m002 uint64_t                                                     mptr;                   //{ +0x0010    } | .MPTR
        _m003 uint64_t                                                     prp1;                   //{ +0x0018    } | .PRP1
        _m004 uint64_t                                                     prp2;                   //{ +0x0020    } | .PRP2
        _m011 u0_general_t                                                 general;                //{ +0x0028    } | .GENERAL
        _m018 u1_identify_t                                                identify;               //{ +0x0028    } | .IDENTIFY
        _m025 u2_abort_t                                                   abort;                  //{ +0x0028    } | .ABORT
        _m032 u3_getfeatures_t                                             getfeatures;            //{ +0x0028    } | .GETFEATURES
        _m039 u4_setfeatures_t                                             setfeatures;            //{ +0x0028    } | .SETFEATURES
        _m047 u5_getlogpage_t                                              getlogpage;             //{ +0x0028    } | .GETLOGPAGE
        _m054 u6_createiocq_t                                              createiocq;             //{ +0x0028    } | .CREATEIOCQ
        _m061 u7_createiosq_t                                              createiosq;             //{ +0x0028    } | .CREATEIOSQ
        _m068 u8_datasetmanagement_t                                       datasetmanagement;      //{ +0x0028    } | .DATASETMANAGEMENT
        _m075 u9_securitysend_t                                            securitysend;           //{ +0x0028    } | .SECURITYSEND
        _m082 u10_securityreceive_t                                        securityreceive;        //{ +0x0028    } | .SECURITYRECEIVE
        _m089 u11_firmwaredownload_t                                       firmwaredownload;       //{ +0x0028    } | .FIRMWAREDOWNLOAD
        _m096 u12_firmwareactivate_t                                       firmwareactivate;       //{ +0x0028    } | .FIRMWAREACTIVATE
        _m103 u13_formatnvm_t                                              formatnvm;              //{ +0x0028    } | .FORMATNVM
        _m110 u14_directivereceive_t                                       directivereceive;       //{ +0x0028    } | .DIRECTIVERECEIVE
        _m117 u15_directivesend_t                                          directivesend;          //{ +0x0028    } | .DIRECTIVESEND
        _m124 u16_sanitize_t                                               sanitize;               //{ +0x0028    } | .SANITIZE
        _m131 u17_readwrite_t                                              readwrite;              //{ +0x0028    } | .READWRITE
        _m138 u18_reservationacquire_t                                     reservationacquire;     //{ +0x0028    } | .RESERVATIONACQUIRE
        _m145 u19_reservationregister_t                                    reservationregister;    //{ +0x0028    } | .RESERVATIONREGISTER
        _m152 u20_reservationrelease_t                                     reservationrelease;     //{ +0x0028    } | .RESERVATIONRELEASE
        _m159 u21_reservationreport_t                                      reservationreport;      //{ +0x0028    } | .RESERVATIONREPORT
        _m165 u22_zonemanagementsend_t                                     zonemanagementsend;     //{ +0x0028    } | .ZONEMANAGEMENTSEND
        _m171 u23_zonemanagementreceive_t                                  zonemanagementreceive;  //{ +0x0028    } | .ZONEMANAGEMENTRECEIVE
        _m177 u24_zoneappend_t                                             zoneappend;             //{ +0x0028    } | .ZONEAPPEND
                                                                                                 
        SDK_MAGIC_PROPERTIES( "NVME_COMMAND.$", 0x0, false, 0xe0957ca8480ae557 );                      
        SDK_FIXED_SIZE( nvme_command_t, 0x40 );                                                  
    };                                                                                           
};
#include "magic/nvme_command_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_command_t::u0_general_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u1_identify_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u2_abort_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u3_getfeatures_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u4_setfeatures_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u5_getlogpage_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u6_createiocq_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u7_createiosq_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u8_datasetmanagement_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u9_securitysend_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u10_securityreceive_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u11_firmwaredownload_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u12_firmwareactivate_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u13_formatnvm_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u14_directivereceive_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u15_directivesend_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u16_sanitize_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u17_readwrite_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u18_reservationacquire_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u19_reservationregister_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u20_reservationrelease_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u21_reservationreport_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u22_zonemanagementsend_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u23_zonemanagementreceive_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t::u24_zoneappend_t, 0x18 );
SDK_VERIFY( struct stor::port::nvme_command_t, 0x40 );
