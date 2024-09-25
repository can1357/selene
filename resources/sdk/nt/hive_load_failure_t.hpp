#pragma once
#include <sdkgen/support_library.hpp>
#include "../cm/parse_debug_info_t.hpp"
#include "../cm/load_failure_type_t.hpp"

#include "magic/hive_load_failure_t.start.hpp"
namespace nt
{
    struct hbin_t;
    struct hcell_t;
    struct hhive_t;
    struct cell_data_t;

    // [struct _HIVE_LOAD_FAILURE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct hive_load_failure_t                                              
    {                                                                       
        struct u0_locations_t                                               
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
            //                                                              
            _m03 enum cm::load_failure_type_t failure;                        //{ +0x0000    +0x0000    +0x0000    } | .Failure
            _m04 int32_t                      status;                         //{ +0x0004    +0x0004    +0x0004    } | .Status
            _m05 uint32_t                     point;                          //{ +0x0008    +0x0008    +0x0008    } | .Point
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.Locations.$", 0xc, true, 0x6181efa9b28cb4e0 );                              
            SDK_FIXED_SIZE( u0_locations_t, 0xc );                              
        };                                                                  
                                                                            
        struct u3_recoverable_locations_t                                   
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
            //                                                              
            _m07 enum cm::load_failure_type_t failure;                        //{ +0x0000    +0x0000    +0x0000    } | .Failure
            _m08 int32_t                      status;                         //{ +0x0004    +0x0004    +0x0004    } | .Status
            _m09 uint32_t                     point;                          //{ +0x0008    +0x0008    +0x0008    } | .Point
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.RecoverableLocations.$", 0xc, true, 0x8d31bd5339dabdad );                              
            SDK_FIXED_SIZE( u3_recoverable_locations_t, 0xc );                              
        };                                                                  
                                                                            
        struct u3_registry_io_t                                             
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                             
            //                                                              
            _m11 uint32_t action;                                             //{ +0x0000    +0x0000    +0x0000    } | .Action
            _m12 void*    handle;                                             //{ +0x0008    +0x0008    +0x0008    } | .Handle
            _m13 int32_t  status;                                             //{ +0x0010    +0x0010    +0x0010    } | .Status
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.RegistryIO.$", 0x18, true, 0x4f181989ce9ab55 );                             
            SDK_FIXED_SIZE( u3_registry_io_t, 0x18 );                             
        };                                                                  
                                                                            
        struct u6_check_registry2_t                                         
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                  
            //                                                              
            _m15 void* check_stack;                                           //{ +0x0000    +0x0000    +0x0000    } | .CheckStack
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckRegistry2.$", 0x8, true, 0xee5e5ea434e73a8 );                                  
            SDK_FIXED_SIZE( u6_check_registry2_t, 0x8 );                                  
        };                                                                  
                                                                            
        struct u9_check_key_t                                               
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
            //                                                              
            _m17 uint32_t                cell;                                //{ +0x0000    +0x0000    +0x0000    } | .Cell
            _m18 struct nt::cell_data_t* cell_point;                          //{ +0x0008    +0x0008    +0x0008    } | .CellPoint
            _m19 void*                   root_point;                          //{ +0x0010    +0x0010    +0x0010    } | .RootPoint
            _m20 uint32_t                index;                               //{ +0x0018    +0x0018    +0x0018    } | .Index
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckKey.$", 0x20, true, 0x6b549ecb47fe801e );                                 
            SDK_FIXED_SIZE( u9_check_key_t, 0x20 );                                 
        };                                                                  
                                                                            
        struct u12_check_value_list_t                                       
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
            //                                                              
            _m22 struct nt::cell_data_t* list;                                //{ +0x0000    +0x0000    +0x0000    } | .List
            _m23 uint32_t                index;                               //{ +0x0008    +0x0008    +0x0008    } | .Index
            _m24 uint32_t                cell;                                //{ +0x000c    +0x000c    +0x000c    } | .Cell
            _m25 struct nt::cell_data_t* cell_point;                          //{ +0x0010    +0x0010    +0x0010    } | .CellPoint
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckValueList.$", 0x18, true, 0x7b67fe9b7ae3712a );                                 
            SDK_FIXED_SIZE( u12_check_value_list_t, 0x18 );                                 
        };                                                                  
                                                                            
        struct u15_check_hive_t                                             
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                
            //                                                              
            _m27 uint32_t           space;                                    //{ +0x0000    +0x0000    +0x0000    } | .Space
            _m28 uint32_t           map_point;                                //{ +0x0004    +0x0004    +0x0004    } | .MapPoint
            _m29 struct nt::hbin_t* bin_point;                                //{ +0x0008    +0x0008    +0x0008    } | .BinPoint
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckHive.$", 0x10, true, 0x100d99033f10ec11 );                                
            SDK_FIXED_SIZE( u15_check_hive_t, 0x10 );                                
        };                                                                  
                                                                            
        struct u18_check_hive1_t                                            
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                
            //                                                              
            _m31 uint32_t           space;                                    //{ +0x0000    +0x0000    +0x0000    } | .Space
            _m32 uint32_t           map_point;                                //{ +0x0004    +0x0004    +0x0004    } | .MapPoint
            _m33 struct nt::hbin_t* bin_point;                                //{ +0x0008    +0x0008    +0x0008    } | .BinPoint
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckHive1.$", 0x10, true, 0xca121f4d2c9c8225 );                                
            SDK_FIXED_SIZE( u18_check_hive1_t, 0x10 );                                
        };                                                                  
                                                                            
        struct u18_check_bin_t                                              
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
            //                                                              
            _m35 struct nt::hbin_t*  bin;                                     //{ +0x0000    +0x0000    +0x0000    } | .Bin
            _m36 struct nt::hcell_t* cell_point;                              //{ +0x0008    +0x0008    +0x0008    } | .CellPoint
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.CheckBin.$", 0x10, true, 0x82ccf45c13440641 );                                 
            SDK_FIXED_SIZE( u18_check_bin_t, 0x10 );                                 
        };                                                                  
                                                                            
        struct u21_recover_data_t                                           
        {                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                  
            //                                                              
            _m38 uint32_t file_offset;                                        //{ +0x0000    +0x0000    +0x0000    } | .FileOffset
                                                                            
            SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.RecoverData.$", 0x4, true, 0x88177c28f0bf5a9c );                                  
            SDK_FIXED_SIZE( u21_recover_data_t, 0x4 );                                  
        };                                                                  
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                      
        //                                                                  
        _m00 struct nt::hhive_t*                      hive;                   //{ +0x0000    +0x0000    +0x0000    } | .Hive
        _m01 varuint_t                                index;                  //{ +0x0008    +0x0008    +0x0008    } | .Index
        _m02 varuint_t                                recoverable_index;      //{ +0x000c    +0x000a    +0x000a    } | .RecoverableIndex
        _m06 sdk::array<u0_locations_t, 8>            locations;              //{ +0x0010    +0x000c    +0x000c    } | .Locations
        _m10 sdk::array<u0_locations_t, 8>            recoverable_locations;  //{ +0x0070    +0x006c    +0x006c    } | .RecoverableLocations
        _m14 u3_registry_io_t                         registry_io;            //{ +0x00d0    +0x00d0    +0x00d0    } | .RegistryIO
        _m16 u6_check_registry2_t                     check_registry2;        //{ +0x00e8    +0x00e8    +0x00e8    } | .CheckRegistry2
        _m21 u9_check_key_t                           check_key;              //{ +0x00f0    +0x00f0    +0x00f0    } | .CheckKey
        _m26 u12_check_value_list_t                   check_value_list;       //{ +0x0110    +0x0110    +0x0110    } | .CheckValueList
        _m30 u15_check_hive_t                         check_hive;             //{ +0x0128    +0x0128    +0x0128    } | .CheckHive
        _m34 u15_check_hive_t                         check_hive1;            //{ +0x0138    +0x0138    +0x0138    } | .CheckHive1
        _m37 u18_check_bin_t                          check_bin;              //{ +0x0148    +0x0148    +0x0148    } | .CheckBin
        _m39 u21_recover_data_t                       recover_data;           //{ +0x0158    +0x0158    +0x0158    } | .RecoverData
                                                                            
        // Windows 10 v2004, Windows 10 v20H2                               
        //                                                                  
        _m40 struct cm::parse_debug_info_t            link_debug;             //{ +0x0160    +0x0160    } | .LinkDebug
                                                                            
        SDK_MAGIC_PROPERTIES( "_HIVE_LOAD_FAILURE.$", 0x1b0, true, 0xceb792e9f469dd88 );                      
        SDK_DYNAMIC_SIZE( hive_load_failure_t );                            
    };                                                                      
};
#include "magic/hive_load_failure_t.end.hpp"
SDK_VERIFY( struct nt::hive_load_failure_t::u0_locations_t, 0xc );
SDK_VERIFY( struct nt::hive_load_failure_t::u3_recoverable_locations_t, 0xc );
SDK_VERIFY( struct nt::hive_load_failure_t::u3_registry_io_t, 0x18 );
SDK_VERIFY( struct nt::hive_load_failure_t::u6_check_registry2_t, 0x8 );
SDK_VERIFY( struct nt::hive_load_failure_t::u9_check_key_t, 0x20 );
SDK_VERIFY( struct nt::hive_load_failure_t::u12_check_value_list_t, 0x18 );
SDK_VERIFY( struct nt::hive_load_failure_t::u15_check_hive_t, 0x10 );
SDK_VERIFY( struct nt::hive_load_failure_t::u18_check_hive1_t, 0x10 );
SDK_VERIFY( struct nt::hive_load_failure_t::u18_check_bin_t, 0x10 );
SDK_VERIFY( struct nt::hive_load_failure_t::u21_recover_data_t, 0x4 );
