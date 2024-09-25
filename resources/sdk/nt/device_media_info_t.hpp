#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_media_type_t.hpp"
#include "../stor/port/storage_bus_type_t.hpp"

#include "magic/device_media_info_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_MEDIA_INFO]
    // => WDK 10 (NV)
    //
    struct device_media_info_t                                                                                               
    {                                                                                                                        
        union u0_device_specific_t                                                                                           
        {                                                                                                                    
            struct u1_disk_info_t                                                                                            
            {                                                                                                                
                // WDK 10                                                                                                    
                //                                                                                                           
                _m00 int64_t                       cylinders;                                                                  //{ +0x0000    } | .Cylinders
                _m01 enum nt::storage_media_type_t media_type;                                                                 //{ +0x0008    } | .MediaType
                _m02 uint32_t                      tracks_per_cylinder;                                                        //{ +0x000c    } | .TracksPerCylinder
                _m03 uint32_t                      sectors_per_track;                                                          //{ +0x0010    } | .SectorsPerTrack
                _m04 uint32_t                      bytes_per_sector;                                                           //{ +0x0014    } | .BytesPerSector
                _m05 uint32_t                      number_media_sides;                                                         //{ +0x0018    } | .NumberMediaSides
                _m06 uint32_t                      media_characteristics;                                                      //{ +0x001c    } | .MediaCharacteristics
                                                                                                                             
                SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.DiskInfo.$", 0x0, false, 0x27aaf7b4c5ebc7c8 );                                                          
                SDK_FIXED_SIZE( u1_disk_info_t, 0x20 );                                                                      
            };                                                                                                               
                                                                                                                             
            struct u2_removable_disk_info_t                                                                                  
            {                                                                                                                
                // WDK 10                                                                                                    
                //                                                                                                           
                _m08 int64_t                       cylinders;                                                                  //{ +0x0000    } | .Cylinders
                _m09 enum nt::storage_media_type_t media_type;                                                                 //{ +0x0008    } | .MediaType
                _m10 uint32_t                      tracks_per_cylinder;                                                        //{ +0x000c    } | .TracksPerCylinder
                _m11 uint32_t                      sectors_per_track;                                                          //{ +0x0010    } | .SectorsPerTrack
                _m12 uint32_t                      bytes_per_sector;                                                           //{ +0x0014    } | .BytesPerSector
                _m13 uint32_t                      number_media_sides;                                                         //{ +0x0018    } | .NumberMediaSides
                _m14 uint32_t                      media_characteristics;                                                      //{ +0x001c    } | .MediaCharacteristics
                                                                                                                             
                SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.RemovableDiskInfo.$", 0x0, false, 0x6a382f6f6944c5f5 );                                                          
                SDK_FIXED_SIZE( u2_removable_disk_info_t, 0x20 );                                                            
            };                                                                                                               
                                                                                                                             
            struct u2_tape_info_t                                                                                            
            {                                                                                                                
                union u3_bus_specific_data_t                                                                                 
                {                                                                                                            
                    struct u4_scsi_information_t                                                                             
                    {                                                                                                        
                        // WDK 10                                                                                            
                        //                                                                                                   
                        _m20 uint8_t medium_type;                                                                              //{ +0x0000    } | .MediumType
                        _m21 uint8_t density_code;                                                                             //{ +0x0001    } | .DensityCode
                                                                                                                             
                        SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData.ScsiInformation.$", 0x0, false, 0x6dacbc9ff2130fae );                                                                                        
                        SDK_FIXED_SIZE( u4_scsi_information_t, 0x2 );                                                                                        
                    };                                                                                                       
                                                                                                                             
                    // WDK 10                                                                                                
                    //                                                                                                       
                    _m22 u4_scsi_information_t    scsi_information;                                                            //{ +0x0000    } | .ScsiInformation
                                                                                                                             
                    SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.BusSpecificData.$", 0x0, false, 0x1f854a62fa91e415 );                                                                           
                    SDK_FIXED_SIZE( u3_bus_specific_data_t, 0x2 );                                                                           
                };                                                                                                           
                                                                                                                             
                // WDK 10                                                                                                    
                //                                                                                                           
                _m16 enum nt::storage_media_type_t                 media_type;                                                 //{ +0x0000    } | .MediaType
                _m17 uint32_t                                      media_characteristics;                                      //{ +0x0004    } | .MediaCharacteristics
                _m18 uint32_t                                      current_block_size;                                         //{ +0x0008    } | .CurrentBlockSize
                _m19 enum stor::port::storage_bus_type_t           bus_type;                                                   //{ +0x000c    } | .BusType
                _m23 u3_bus_specific_data_t                        bus_specific_data;                                          //{ +0x0010    } | .BusSpecificData
                                                                                                                             
                SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.TapeInfo.$", 0x0, false, 0x99db2013df2d561a );                                                          
                SDK_FIXED_SIZE( u2_tape_info_t, 0x14 );                                                                      
            };                                                                                                               
                                                                                                                             
            // WDK 10                                                                                                        
            //                                                                                                               
            _m07 u1_disk_info_t                                                          disk_info;                            //{ +0x0000    } | .DiskInfo
            _m15 u1_disk_info_t                                                          removable_disk_info;                  //{ +0x0000    } | .RemovableDiskInfo
            _m24 u2_tape_info_t                                                          tape_info;                            //{ +0x0000    } | .TapeInfo
                                                                                                                             
            SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.DeviceSpecific.$", 0x0, false, 0x355275e129841ace );                                    
            SDK_FIXED_SIZE( u0_device_specific_t, 0x20 );                                                                    
        };                                                                                                                   
                                                                                                                             
        // WDK 10                                                                                                            
        //                                                                                                                   
        _m25 u0_device_specific_t                                                                            device_specific;  //{ +0x0000    } | .DeviceSpecific
                                                                                                                             
        SDK_NONVOL_PROPERTIES( "_DEVICE_MEDIA_INFO.$", 0x0, false, 0x21c4c860ff0577a7 );                                     
        SDK_FIXED_SIZE( device_media_info_t, 0x20 );                                                                         
    };                                                                                                                       
};
#include "magic/device_media_info_t.end.hpp"
SDK_VERIFY( struct nt::device_media_info_t::u0_device_specific_t::u1_disk_info_t, 0x20 );
SDK_VERIFY( struct nt::device_media_info_t::u0_device_specific_t::u2_removable_disk_info_t, 0x20 );
SDK_VERIFY( struct nt::device_media_info_t::u0_device_specific_t::u2_tape_info_t::u3_bus_specific_data_t::u4_scsi_information_t, 0x2 );
SDK_VERIFY( union nt::device_media_info_t::u0_device_specific_t::u2_tape_info_t::u3_bus_specific_data_t, 0x2 );
SDK_VERIFY( struct nt::device_media_info_t::u0_device_specific_t::u2_tape_info_t, 0x14 );
SDK_VERIFY( union nt::device_media_info_t::u0_device_specific_t, 0x20 );
SDK_VERIFY( struct nt::device_media_info_t, 0x20 );
