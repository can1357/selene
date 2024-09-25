#pragma once
#include <sdkgen/support_library.hpp>
#include "class_dev_info_t.hpp"

#include "magic/class_init_data_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct driver_object_t;

    // [struct _CLASS_INIT_DATA]
    // => WDK 10 (NV)
    //
    struct class_init_data_t                                             
    {                                                                    
        enum class u0_class_query_id_t : int32_t                         
        {                                                                
            device_id =            0x0,                                    // WDK 10
            hardware_i_ds =        0x1,                                    // WDK 10
            compatible_i_ds =      0x2,                                    // WDK 10
            instance_id =          0x3,                                    // WDK 10
            device_serial_number = 0x4,                                    // WDK 10
            container_id =         0x5,                                    // WDK 10
        };                                                               
                                                                         
        using class_add_device_t =       sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*;                         
        using class_enumerate_device_t = sdk::function<int32_t(struct nt::device_object_t*)>*;                         
        using pclass_query_id_t =        sdk::function<int32_t(struct nt::device_object_t*, enum , nt::unicode_view*)>*;                         
        using class_start_io_t =         sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*;                         
        using class_unload_t =           sdk::function<void(struct nt::driver_object_t*)>*;                         
        using pclass_tick_t =            sdk::function<void(struct nt::device_object_t*)>*;                         
                                                                         
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                           initialization_data_size;  //{ +0x0000    } | .InitializationDataSize
        _m01 struct nt::class_dev_info_t        fdo_data;                  //{ +0x0008    } | .FdoData
        _m02 struct nt::class_dev_info_t        pdo_data;                  //{ +0x00b0    } | .PdoData
        _m03 class_add_device_t                 class_add_device;          //{ +0x0158    } | .ClassAddDevice
        _m04 class_enumerate_device_t           class_enumerate_device;    //{ +0x0160    } | .ClassEnumerateDevice
        _m05 pclass_query_id_t                  class_query_id;            //{ +0x0168    } | .ClassQueryId
        _m06 class_start_io_t                   class_start_io;            //{ +0x0170    } | .ClassStartIo
        _m07 class_unload_t                     class_unload;              //{ +0x0178    } | .ClassUnload
        _m08 pclass_tick_t                      class_tick;                //{ +0x0180    } | .ClassTick
                                                                         
        SDK_NONVOL_PROPERTIES( "_CLASS_INIT_DATA.$", 0x0, false, 0xb6eb8a295f8c26cb );                         
        SDK_FIXED_SIZE( class_init_data_t, 0x188 );                         
    };                                                                   
};
#include "magic/class_init_data_t.end.hpp"
SDK_VERIFY( struct nt::class_init_data_t, 0x188 );
