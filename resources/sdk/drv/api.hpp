#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace drv
{
    // [DrvDbGetDriverDatabaseCompositeMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa592b4, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) db_get_driver_database_composite_mapped_property_keys;
    
    // [DrvDbGetRegValueMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6e4920, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) db_get_reg_value_mapped_property_keys;
    
    // [DrvDbGetRegistrarSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x866b8c, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) db_get_registrar_security_descriptor;
    
    // [DrvDbGetObjectDatabaseNodeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97ac60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67624c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979540, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) db_get_object_database_node_name;
    
    // [DrvDbOpenDeviceIdRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70a8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66bde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x712338, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) db_open_device_id_reg_key;
    
    // [DrvDbOpenDriverFileRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97b358, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x669428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979c38, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) db_open_driver_file_reg_key;
    
    // [DrvDbOpenDriverInfFileRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e2d64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a5c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afd34, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) db_open_driver_inf_file_reg_key;
    
    // [DrvDbOpenDriverPackageRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5de0a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a204, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad3e4, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) db_open_driver_package_reg_key;
    
    // [DrvDbUnregisterDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97b610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979ef0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) db_unregister_database;
    
    // [DrvDbAcquireDatabaseNodeBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d95c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71183c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad6b4, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) db_acquire_database_node_base_key;
    
    // [DrvDbBuildDeviceIdDriverInfMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3408, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80490c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1f74, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) db_build_device_id_driver_inf_match;
    
    // [DrvDbCreateDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7810e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8386b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ae88, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) db_create_database_node;
    
    // [DrvDbDeleteObjectRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e351c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x979a44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x978324, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) db_delete_object_reg_key;
    
    // [DrvDbDeleteObjectSubKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e367c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x979bac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58c8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97848c, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) db_delete_object_sub_key;
    
    // [DrvDbDestroyDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5ffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b66c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979f4c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) db_destroy_database_node;
    
    // [DrvDbDispatchDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6799c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b09e0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) db_dispatch_device_id;
    
    // [DrvDbDispatchDriverDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44432c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e08a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6796c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad0e0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) db_dispatch_driver_database;
    
    // [DrvDbDispatchDriverFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e64c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97bb80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6691e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97a460, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) db_dispatch_driver_file;
    
    // [DrvDbDispatchDriverInfFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4458fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x679520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afbc0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) db_dispatch_driver_inf_file;
    
    // [DrvDbDispatchDriverPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x679820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad240, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) db_dispatch_driver_package;
    
    // [DrvDbFindDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489350, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66791c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67aa2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afd7c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) db_find_database_node;
    
    // [DrvDbGetCompositeMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3a84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a04c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa59144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97892c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) db_get_composite_mapped_property_keys;
    
    // [DrvDbGetConfigurationSubKeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23a960, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c1530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65dd80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c03a0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) db_get_configuration_sub_key_callback;
    
    // [DrvDbGetDeviceIdDriverInfMatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1cd0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) db_get_device_id_driver_inf_matches;
    
    // [DrvDbGetDeviceIdMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e30f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70f7e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0268, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) db_get_device_id_mapped_property;
    
    // [DrvDbGetDeviceIdMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3afc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa591c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9789b0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) db_get_device_id_mapped_property_keys;
    
    // [DrvDbGetDriverDatabaseList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6acfd4, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) db_get_driver_database_list;
    
    // [DrvDbGetDriverDatabaseMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b6f8, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) db_get_driver_database_mapped_property;
    
    // [DrvDbGetDriverDatabaseMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a1a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa593bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x978a84, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) db_get_driver_database_mapped_property_keys;
    
    // [DrvDbGetDriverFileMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3d9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6692d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x978d64, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) db_get_driver_file_mapped_property;
    
    // [DrvDbGetDriverFileMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a618, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa596c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x978ef8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) db_get_driver_file_mapped_property_keys;
    
    // [DrvDbGetDriverInfFileMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445f28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2c0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0110, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) db_get_driver_inf_file_mapped_property;
    
    // [DrvDbGetDriverInfFileMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e3f68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a7a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5986c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979084, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) db_get_driver_inf_file_mapped_property_keys;
    
    // [DrvDbGetDriverPackageMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e1f4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x679b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ae10c, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) db_get_driver_package_mapped_property;
    
    // [DrvDbGetDriverPackageMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e400c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97a930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa59a18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979210, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) db_get_driver_package_mapped_property_keys;
    
    // [DrvDbGetDriverPackageSignerName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4274, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97aba8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa59c9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979488, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) db_get_driver_package_signer_name;
    
    // [DrvDbGetDriverPackageSignerScore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e39c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712894, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x669940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a224, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) db_get_driver_package_signer_score;
    
    // [DrvDbGetObjectDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddc38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad870, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) db_get_object_database_node;
    
    // [DrvDbGetObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97ad1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa59d54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9795fc, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) db_get_object_list;
    
    // [DrvDbGetObjectSubKeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e44f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97af00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa59f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9797e0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) db_get_object_sub_key_callback;
    
    // [DrvDbGetObjectSubKeyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979b20, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) db_get_object_sub_key_list;
    
    // [DrvDbGetRegValueMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445a04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2ac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a24c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aff4c, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) db_get_reg_value_mapped_property;
    
    // [DrvDbGetSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e6088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b6fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979fdc, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) db_get_security_descriptor;
    
    // [DrvDbInitializeDatabaseNodeVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e6420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97ba94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5aa80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97a374, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) db_initialize_database_node_version;
    
    // [DrvDbLoadDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c12c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de10c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67ab94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad96c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) db_load_database_node;
    
    // [DrvDbOpenContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x780e8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838e5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ac2c, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) db_open_context;
    
    // [DrvDbOpenDriverDatabaseRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f04c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67a8d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b8cc, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) db_open_driver_database_reg_key;
    
    // [DrvDbOpenObjectRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43dad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db628, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad42c, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) db_open_object_reg_key;
    
    // [DrvDbRegisterDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5694dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x781050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8391f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78adf0, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) db_register_database;
    
    // [DrvDbRegisterObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x780fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ad70, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) db_register_objects;
    
    // [DrvDbReleaseDatabaseNodeBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43dc78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5db814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7117a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad618, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) db_release_database_node_base_key;
    
    // [DrvDbSetDeviceIdDriverInfMatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66be28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7120b4, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) db_set_device_id_driver_inf_matches;
    
    // [DrvDbSetDeviceIdMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4d34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66bc90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711f64, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) db_set_device_id_mapped_property;
    
    // [DrvDbSetDriverDatabaseMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e4f04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7122a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6792c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719c38, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) db_set_driver_database_mapped_property;
    
    // [DrvDbSetDriverFileMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e54d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979c80, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) db_set_driver_file_mapped_property;
    
    // [DrvDbSetDriverInfFileMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e55ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71216c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x669470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719afc, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) db_set_driver_inf_file_mapped_property;
    
    // [DrvDbSetDriverPackageMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5704, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712454, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6695a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719de4, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) db_set_driver_package_mapped_property;
    
    // [DrvDbSetRegValueMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71280c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67ae4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a19c, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) db_set_reg_value_mapped_property;
    
    // [DrvDbSplitDeviceIdDriverInfMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5d7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e5d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x800d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756210, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) db_split_device_id_driver_inf_match;
    
    // [DrvDbSuspendDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54728c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78065c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a3fc, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) db_suspend_database;
    
    // [DrvDbUnloadDatabaseNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67aab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6adc30, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) db_unload_database_node;
    
    // [DrvDbValidateDeviceIdName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b4d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a4cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979db4, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) db_validate_device_id_name;
    
    // [DrvDbValidateDriverDatabaseName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5f48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b54c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979e2c, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) db_validate_driver_database_name;
    
    // [DrvDbValidateDriverFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b5b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979e94, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) db_validate_driver_file_name;
    
    // [DrvDbValidateDriverInfFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b5b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979e94, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) db_validate_driver_inf_file_name;
    
    // [DrvDbValidateDriverPackageName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e5fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97b5b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5a5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x979e94, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) db_validate_driver_package_name;
    
    // [DrvCloseLocalGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe990, 0x1eb80 bytes
    //
    _s6(sdk::unknown_ptr) close_local_graphics_devices;
    
    // [DrvDisplaySwitchHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xcdbc0, 0x1eb80 bytes
    //
    _s7(sdk::unknown_ptr) display_switch_handler;
    
    // [DrvEnableDirectDrawForModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x80888, 0x1eb80 bytes
    //
    _s8(sdk::unknown_ptr) enable_direct_draw_for_mode_change;
    
    // [DrvIsDisplayStateCurrent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x18baf8, 0x27ef0 bytes
    //
    _s9(sdk::unknown_ptr) is_display_state_current;
    
    // [DrvLogDrvChangeDisplaySettingsFailures]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x18bb40, 0x27ef0 bytes
    //
    _t0(sdk::unknown_ptr) log_drv_change_display_settings_failures;
    
    // [DrvProcessMonitorEventCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xce23c, 0x1eb80 bytes
    //
    _t1(sdk::unknown_ptr) process_monitor_event_callback;
    
    // [DrvStopPresenterView]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x88ad0, 0x1eb80 bytes
    //
    _t2(sdk::unknown_ptr) stop_presenter_view;
    
    // [DrvUpdateDpiInfoAndNotifyMonitorChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xcecc8, 0x1eb80 bytes
    //
    _t3(sdk::unknown_ptr) update_dpi_info_and_notify_monitor_change;
    
    // [DrvWaitForMonitorProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x89c00, 0x1eb80 bytes
    //
    _t4(sdk::unknown_ptr) wait_for_monitor_processing;
    
    // [DrvWakeupHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xcef60, 0x1eb80 bytes
    //
    _t5(sdk::unknown_ptr) wakeup_handler;
    
    // [DrvChangeDisplaySettingsPreValidate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1574c, 0x243e0 bytes
    // win32kbase.sys .text:0x63948, 0x27ef0 bytes
    // win32kbase.sys .text:0x48a08, 0x243e0 bytes
    //
    _t6(sdk::unknown_ptr) change_display_settings_pre_validate;
    
    // [DrvCloseGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2eaf0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7be0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbecf0, 0x243e0 bytes
    //
    _t7(sdk::unknown_ptr) close_graphics_devices;
    
    // [DrvCollectColorProfileForUser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb75cc, 0x243e0 bytes
    // win32kbase.sys .text:0xcbb88, 0x27ef0 bytes
    // win32kbase.sys .text:0xb14bc, 0x243e0 bytes
    //
    _t8(sdk::unknown_ptr) collect_color_profile_for_user;
    
    // [DrvDisplayConfigGetDeviceInfoInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd5478, 0x243e0 bytes
    // win32kbase.sys .text:0x55e9c, 0x27ef0 bytes
    // win32kbase.sys .text:0xd3e68, 0x243e0 bytes
    //
    _t9(sdk::unknown_ptr) display_config_get_device_info_internal;
    
    // [DrvDxgkCheckDisplayState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x157fe4, 0x243e0 bytes
    // win32kbase.sys .text:0x18b3dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x155e84, 0x243e0 bytes
    //
    _u0(sdk::unknown_ptr) dxgk_check_display_state;
    
    // [DrvFunctionalizeDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1583e4, 0x243e0 bytes
    // win32kbase.sys .text:0x18b7b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x156284, 0x243e0 bytes
    //
    _u1(sdk::unknown_ptr) functionalize_display_config;
    
    // [DrvGetDevModeForLddmPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb908, 0x243e0 bytes
    // win32kbase.sys .text:0xd0c9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4a0fc, 0x243e0 bytes
    //
    _u2(sdk::unknown_ptr) get_dev_mode_for_lddm_path;
    
    // [DrvGetDisplayDriverDpiSetting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x30838, 0x243e0 bytes
    // win32kbase.sys .text:0x8ee60, 0x27ef0 bytes
    // win32kbase.sys .text:0x4b908, 0x243e0 bytes
    //
    _u3(sdk::unknown_ptr) get_display_driver_dpi_setting;
    
    // [DrvIsExternalMonitorActive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x520c, 0x243e0 bytes
    // win32kbase.sys .text:0xd0bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x520c, 0x243e0 bytes
    //
    _u4(sdk::unknown_ptr) is_external_monitor_active;
    
    // [DrvIsNotUsingGraphicsDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc63d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd8f00, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf220, 0x243e0 bytes
    //
    _u5(sdk::unknown_ptr) is_not_using_graphics_device;
    
    // [DrvIsUniformSpaceMapping]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x236a0, 0x243e0 bytes
    // win32kbase.sys .text:0x658f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x541e0, 0x243e0 bytes
    //
    _u6(sdk::unknown_ptr) is_uniform_space_mapping;
    
    // [DrvPixelSpaceToUniformSpacePoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x23fd0, 0x243e0 bytes
    // win32kbase.sys .text:0xe3b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x53a80, 0x243e0 bytes
    //
    _u7(sdk::unknown_ptr) pixel_space_to_uniform_space_point;
    
    // [DrvProbeAndCaptureString]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3d454, 0x243e0 bytes
    // win32kbase.sys .text:0x593e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3f4f4, 0x243e0 bytes
    //
    _u8(sdk::unknown_ptr) probe_and_capture_string;
    
    // [DrvProcessDxgkDisplayCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1588d8, 0x243e0 bytes
    // win32kbase.sys .text:0x18bd8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x156778, 0x243e0 bytes
    //
    _u9(sdk::unknown_ptr) process_dxgk_display_callout;
    
    // [DrvSampleDisplayState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbdfb0, 0x243e0 bytes
    // win32kbase.sys .text:0xd30f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x47f30, 0x243e0 bytes
    //
    _v0(sdk::unknown_ptr) sample_display_state;
    
    // [DrvSessionHasAnyGraphicsDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2460, 0x243e0 bytes
    // win32kbase.sys .text:0xe3970, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0e00, 0x243e0 bytes
    //
    _v1(sdk::unknown_ptr) session_has_any_graphics_device;
    
    // [DrvSetDisplayConfigApplyDeviceHack]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15e78, 0x243e0 bytes
    // win32kbase.sys .text:0x63578, 0x27ef0 bytes
    // win32kbase.sys .text:0x4823c, 0x243e0 bytes
    //
    _v2(sdk::unknown_ptr) set_display_config_apply_device_hack;
    
    // [DrvSetMonitorsDimState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x95704, 0x243e0 bytes
    // win32kbase.sys .text:0x6cd48, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2ea8, 0x243e0 bytes
    //
    _v3(sdk::unknown_ptr) set_monitors_dim_state;
    
    // [DrvUniformSpaceToPixelSpacePoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x23610, 0x243e0 bytes
    // win32kbase.sys .text:0x65860, 0x27ef0 bytes
    // win32kbase.sys .text:0x54150, 0x243e0 bytes
    //
    _v4(sdk::unknown_ptr) uniform_space_to_pixel_space_point;
    
    // [DrvUpdateDpiInfoOnOptimizedModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x155edc, 0x243e0 bytes
    // win32kbase.sys .text:0x189378, 0x27ef0 bytes
    // win32kbase.sys .text:0x153d7c, 0x243e0 bytes
    //
    _v5(sdk::unknown_ptr) update_dpi_info_on_optimized_mode_change;
    
    // [DrvAcquireChangeDisplaySettingLocks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x364b4, 0x243e0 bytes
    // win32kbase.sys .text:0x5fa48, 0x27ef0 bytes
    // win32kbase.sys .text:0x504b4, 0x243e0 bytes
    //
    _v6(sdk::unknown_ptr) acquire_change_display_setting_locks;
    
    // [DrvAddAdapterLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb38, 0x1eb80 bytes
    // win32kbase.sys .text:0x832a4, 0x243e0 bytes
    // win32kbase.sys .text:0x5fc9c, 0x27ef0 bytes
    // win32kbase.sys .text:0xc7594, 0x243e0 bytes
    //
    _v7(sdk::unknown_ptr) add_adapter_luid;
    
    // [DrvAddEntryToGraphicsDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcb474, 0x1eb80 bytes
    // win32kbase.sys .text:0x154830, 0x243e0 bytes
    // win32kbase.sys .text:0x187b3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1526d0, 0x243e0 bytes
    //
    _v8(sdk::unknown_ptr) add_entry_to_graphics_device_list;
    
    // [DrvAddMirrorDriversToRemoteList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88e74, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1154, 0x243e0 bytes
    // win32kbase.sys .text:0xe25a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcf954, 0x243e0 bytes
    //
    _v9(sdk::unknown_ptr) add_mirror_drivers_to_remote_list;
    
    // [DrvBackoutMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcb4c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x154890, 0x243e0 bytes
    // win32kbase.sys .text:0x187b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x152730, 0x243e0 bytes
    //
    _w0(sdk::unknown_ptr) backout_mdev;
    
    // [DrvBuildDevmodeList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x11d80, 0x1eb80 bytes
    // win32kbase.sys .text:0x2ffa0, 0x243e0 bytes
    // win32kbase.sys .text:0x8e560, 0x27ef0 bytes
    // win32kbase.sys .text:0x4b070, 0x243e0 bytes
    //
    _w1(sdk::unknown_ptr) build_devmode_list;
    
    // [DrvChangeD3RequestsState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89b98, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1e10, 0x243e0 bytes
    // win32kbase.sys .text:0xe33b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd07b0, 0x243e0 bytes
    //
    _w2(sdk::unknown_ptr) change_d3_requests_state;
    
    // [DrvChangeDisplayFallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82138, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3cf0, 0x243e0 bytes
    // win32kbase.sys .text:0xd6c64, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd0b4, 0x243e0 bytes
    //
    _w3(sdk::unknown_ptr) change_display_fallback;
    
    // [DrvChangeDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13124, 0x1eb80 bytes
    // win32kbase.sys .text:0x15b74, 0x243e0 bytes
    // win32kbase.sys .text:0x61ea4, 0x27ef0 bytes
    // win32kbase.sys .text:0x4848c, 0x243e0 bytes
    //
    _w4(sdk::unknown_ptr) change_display_settings;
    
    // [DrvChangeDisplaySettingsEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109dd8, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22b8a0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f3d0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2298e0, 0x243e0 bytes
    //
    _w5(sdk::unknown_ptr) change_display_settings_end;
    
    // [DrvChangeDisplaySettingsInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x16ac0, 0x1eb80 bytes
    // win32kbase.sys .text:0x34730, 0x243e0 bytes
    // win32kbase.sys .text:0x5eaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x4e730, 0x243e0 bytes
    //
    _w6(sdk::unknown_ptr) change_display_settings_internal;
    
    // [DrvChangeDisplaySettingsStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109e58, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bc70, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f7d0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229cb0, 0x243e0 bytes
    //
    _w7(sdk::unknown_ptr) change_display_settings_start;
    
    // [DrvCheckGraphicsDeviceForSmoothRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcb6a4, 0x1eb80 bytes
    // win32kbase.sys .text:0x154b48, 0x243e0 bytes
    // win32kbase.sys .text:0x187e3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1529e8, 0x243e0 bytes
    //
    _w8(sdk::unknown_ptr) check_graphics_device_for_smooth_rotation;
    
    // [DrvCleanupAndDestroyMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b4cc, 0x1eb80 bytes
    // win32kbase.sys .text:0xc4378, 0x243e0 bytes
    // win32kbase.sys .text:0x97588, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd570, 0x243e0 bytes
    //
    _w9(sdk::unknown_ptr) cleanup_and_destroy_mdev;
    
    // [DrvCleanupGraphicsDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba40, 0x1eb80 bytes
    // win32kbase.sys .text:0x83334, 0x243e0 bytes
    // win32kbase.sys .text:0x972f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc7624, 0x243e0 bytes
    //
    _x0(sdk::unknown_ptr) cleanup_graphics_device_list;
    
    // [DrvCleanupGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd2d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x157544, 0x243e0 bytes
    // win32kbase.sys .text:0x18a920, 0x27ef0 bytes
    // win32kbase.sys .text:0x1553e4, 0x243e0 bytes
    //
    _x1(sdk::unknown_ptr) cleanup_graphics_devices;
    
    // [DrvCleanupOneGraphicsDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba90, 0x1eb80 bytes
    // win32kbase.sys .text:0x83390, 0x243e0 bytes
    // win32kbase.sys .text:0x97350, 0x27ef0 bytes
    // win32kbase.sys .text:0xc7680, 0x243e0 bytes
    //
    _x2(sdk::unknown_ptr) cleanup_one_graphics_device;
    
    // [DrvCleanupRemoteGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd460, 0x1eb80 bytes
    // win32kbase.sys .text:0x157758, 0x243e0 bytes
    // win32kbase.sys .text:0x18ab34, 0x27ef0 bytes
    // win32kbase.sys .text:0x1555f8, 0x243e0 bytes
    //
    _x3(sdk::unknown_ptr) cleanup_remote_graphics_devices;
    
    // [DrvCloseRemoteGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143df0, 0x13864 bytes
    // win32kfull.sys .text:0x151a34, 0x1596d bytes
    // win32kfull.sys .text:0x14551c, 0x1659e bytes
    // win32kfull.sys .text:0x152974, 0x1596d bytes
    //
    _x4(sdk::unknown_ptr) close_remote_graphics_devices;
    
    // [DrvCreateCloneHDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcb758, 0x1eb80 bytes
    // win32kbase.sys .text:0x154c04, 0x243e0 bytes
    // win32kbase.sys .text:0x187ef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x152aa4, 0x243e0 bytes
    //
    _x5(sdk::unknown_ptr) create_clone_hdev;
    
    // [DrvCreateMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x180d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x32a4c, 0x243e0 bytes
    // win32kbase.sys .text:0x5b084, 0x27ef0 bytes
    // win32kbase.sys .text:0x4ca48, 0x243e0 bytes
    //
    _x6(sdk::unknown_ptr) create_mdev;
    
    // [DrvCreatePathModalityFromAllPaths]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcb93c, 0x1eb80 bytes
    // win32kbase.sys .text:0x154e80, 0x243e0 bytes
    // win32kbase.sys .text:0x18822c, 0x27ef0 bytes
    // win32kbase.sys .text:0x152d20, 0x243e0 bytes
    //
    _x7(sdk::unknown_ptr) create_path_modality_from_all_paths;
    
    // [DrvCreatePhysicalMonitorObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85660, 0x1eb80 bytes
    // win32kbase.sys .text:0xcd230, 0x243e0 bytes
    // win32kbase.sys .text:0xde990, 0x27ef0 bytes
    // win32kbase.sys .text:0xcbbd0, 0x243e0 bytes
    //
    _x8(sdk::unknown_ptr) create_physical_monitor_objects;
    
    // [DrvDestroyMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a244, 0x1eb80 bytes
    // win32kbase.sys .text:0x37018, 0x243e0 bytes
    // win32kbase.sys .text:0x6077c, 0x27ef0 bytes
    // win32kbase.sys .text:0x51018, 0x243e0 bytes
    //
    _x9(sdk::unknown_ptr) destroy_mdev;
    
    // [DrvDisableDirectDrawForModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x16230, 0x1eb80 bytes
    // win32kbase.sys .text:0x373e4, 0x243e0 bytes
    // win32kbase.sys .text:0xcc288, 0x27ef0 bytes
    // win32kbase.sys .text:0x52ce8, 0x243e0 bytes
    //
    _y0(sdk::unknown_ptr) disable_direct_draw_for_mode_change;
    
    // [DrvDisableDisplay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e678, 0x1eb80 bytes
    // win32kbase.sys .text:0x36554, 0x243e0 bytes
    // win32kbase.sys .text:0x5fd2c, 0x27ef0 bytes
    // win32kbase.sys .text:0x50554, 0x243e0 bytes
    //
    _y1(sdk::unknown_ptr) disable_display;
    
    // [DrvDisableMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a550, 0x1eb80 bytes
    // win32kbase.sys .text:0x369f0, 0x243e0 bytes
    // win32kbase.sys .text:0x60190, 0x27ef0 bytes
    // win32kbase.sys .text:0x509f0, 0x243e0 bytes
    //
    _y2(sdk::unknown_ptr) disable_mdev;
    
    // [DrvDisableMDEVChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a744, 0x1eb80 bytes
    // win32kbase.sys .text:0x36f3c, 0x243e0 bytes
    // win32kbase.sys .text:0x606bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x50f3c, 0x243e0 bytes
    //
    _y3(sdk::unknown_ptr) disable_mdev_children;
    
    // [DrvDisplayConfigGetDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x314c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3f750, 0x243e0 bytes
    // win32kbase.sys .text:0xd9ef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x47ca0, 0x243e0 bytes
    //
    _y4(sdk::unknown_ptr) display_config_get_device_info;
    
    // [DrvDisplayConfigGetScaleFactorOverrides]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd4e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1577f0, 0x243e0 bytes
    // win32kbase.sys .text:0x18abc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x155690, 0x243e0 bytes
    //
    _y5(sdk::unknown_ptr) display_config_get_scale_factor_overrides;
    
    // [DrvDisplayConfigSetDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd5f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x157920, 0x243e0 bytes
    // win32kbase.sys .text:0x18acf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1557c0, 0x243e0 bytes
    //
    _y6(sdk::unknown_ptr) display_config_set_device_info;
    
    // [DrvDisplayConfigSetScaleFactorOverride]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd9b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x157e00, 0x243e0 bytes
    // win32kbase.sys .text:0x18b220, 0x27ef0 bytes
    // win32kbase.sys .text:0x155ca0, 0x243e0 bytes
    //
    _y7(sdk::unknown_ptr) display_config_set_scale_factor_override;
    
    // [DrvDriverExtraCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81730, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3ea0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7c50, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd260, 0x243e0 bytes
    //
    _y8(sdk::unknown_ptr) driver_extra_callback;
    
    // [DrvDriverExtraSizeCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8b610, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9830, 0x243e0 bytes
    // win32kbase.sys .text:0xdaa30, 0x27ef0 bytes
    // win32kbase.sys .text:0xc81d0, 0x243e0 bytes
    //
    _y9(sdk::unknown_ptr) driver_extra_size_callback;
    
    // [DrvDriverFailure]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc01d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x149a44, 0x243e0 bytes
    // win32kbase.sys .text:0x16bd78, 0x27ef0 bytes
    // win32kbase.sys .text:0x147064, 0x243e0 bytes
    //
    _z0(sdk::unknown_ptr) driver_failure;
    
    // [DrvDxgkDisplayOnOff]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc61a0, 0x243e0 bytes
    // win32kbase.sys .text:0xcc660, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf160, 0x243e0 bytes
    //
    _z1(sdk::unknown_ptr) dxgk_display_on_off;
    
    // [DrvDxgkGetMonitorDeviceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29960, 0x1eb80 bytes
    // win32kbase.sys .text:0x1580a0, 0x243e0 bytes
    // win32kbase.sys .text:0x18b4a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x155f40, 0x243e0 bytes
    //
    _z2(sdk::unknown_ptr) dxgk_get_monitor_device_object;
    
    // [DrvDxgkLogCodePointPacket]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88a20, 0x1eb80 bytes
    // win32kbase.sys .text:0xd0660, 0x243e0 bytes
    // win32kbase.sys .text:0xd1710, 0x27ef0 bytes
    // win32kbase.sys .text:0xccfd0, 0x243e0 bytes
    //
    _z3(sdk::unknown_ptr) dxgk_log_code_point_packet;
    
    // [DrvDxgkPollDisplayChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcddd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1580c0, 0x243e0 bytes
    // win32kbase.sys .text:0x18b4c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x155f60, 0x243e0 bytes
    //
    _z4(sdk::unknown_ptr) dxgk_poll_display_children;
    
    // [DrvDxgkUpgradeLegacyDpiSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcddf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1580f0, 0x243e0 bytes
    // win32kbase.sys .text:0x18b4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x155f90, 0x243e0 bytes
    //
    _z5(sdk::unknown_ptr) dxgk_upgrade_legacy_dpi_settings;
    
    // [DrvDxgkWriteDiagEntry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15940, 0x1eb80 bytes
    // win32kbase.sys .text:0xc81d0, 0x243e0 bytes
    // win32kbase.sys .text:0x18b790, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0db0, 0x243e0 bytes
    //
    _z6(sdk::unknown_ptr) dxgk_write_diag_entry;
    
    // [DrvEnableDisplay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x899e8, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1be4, 0x243e0 bytes
    // win32kbase.sys .text:0xe3190, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0584, 0x243e0 bytes
    //
    _z7(sdk::unknown_ptr) enable_display;
    
    // [DrvEnableMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x36c78, 0x243e0 bytes
    // win32kbase.sys .text:0x60404, 0x27ef0 bytes
    // win32kbase.sys .text:0x50c78, 0x243e0 bytes
    //
    _z8(sdk::unknown_ptr) enable_mdev;
    
    // [DrvEnumDisplayDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5f780, 0x1eb80 bytes
    // win32kbase.sys .text:0x43800, 0x243e0 bytes
    // win32kbase.sys .text:0x59a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x377f0, 0x243e0 bytes
    //
    _z9(sdk::unknown_ptr) enum_display_devices;
    
    // [DrvEnumDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13bb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x39be0, 0x243e0 bytes
    // win32kbase.sys .text:0x58ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3e6d0, 0x243e0 bytes
    //
    _a0(sdk::unknown_ptr) enum_display_settings;
    
    // [DrvEscapeRemoteDrivers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a120, 0x1eb80 bytes
    // win32kbase.sys .text:0xd0740, 0x243e0 bytes
    // win32kbase.sys .text:0xe3ce0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcef40, 0x243e0 bytes
    //
    _a1(sdk::unknown_ptr) escape_remote_drivers;
    
    // [DrvFindRemoteDriverhdevInMDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d170, 0x13864 bytes
    // win32kfull.sys .text:0x2741dc, 0x1596d bytes
    // win32kfull.sys .text:0x274184, 0x1659e bytes
    // win32kfull.sys .text:0x27414c, 0x1596d bytes
    //
    _a2(sdk::unknown_ptr) find_remote_driverhdev_in_mdev;
    
    // [DrvForceChildDeviceReenumeration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ced4, 0x1eb80 bytes
    // win32kbase.sys .text:0xc1008, 0x243e0 bytes
    // win32kbase.sys .text:0x5fbc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xba738, 0x243e0 bytes
    //
    _a3(sdk::unknown_ptr) force_child_device_reenumeration;
    
    // [DrvFunctionalizeBaseVidMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbb9c, 0x1eb80 bytes
    // win32kbase.sys .text:0x155110, 0x243e0 bytes
    // win32kbase.sys .text:0x18846c, 0x27ef0 bytes
    // win32kbase.sys .text:0x152fb0, 0x243e0 bytes
    //
    _a4(sdk::unknown_ptr) functionalize_base_vid_mode;
    
    // [DrvGetCurrentDpiInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2490c, 0x1eb80 bytes
    // win32kbase.sys .text:0x21d64, 0x243e0 bytes
    // win32kbase.sys .text:0xba024, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fcb4, 0x243e0 bytes
    //
    _a5(sdk::unknown_ptr) get_current_dpi_info;
    
    // [DrvGetCurrentDpiInfoFromHDev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24a3c, 0x1eb80 bytes
    // win32kbase.sys .text:0x21f40, 0x243e0 bytes
    // win32kbase.sys .text:0xba07c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fe90, 0x243e0 bytes
    //
    _a6(sdk::unknown_ptr) get_current_dpi_info_from_h_dev;
    
    // [DrvGetCurrentDpiInfoFromHDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbcd4, 0x1eb80 bytes
    // win32kbase.sys .text:0x15527c, 0x243e0 bytes
    // win32kbase.sys .text:0x1885b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x15311c, 0x243e0 bytes
    //
    _a7(sdk::unknown_ptr) get_current_dpi_info_from_hdc;
    
    // [DrvGetDeviceConfigurationInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x104bc, 0x1eb80 bytes
    // win32kbase.sys .text:0x33bf4, 0x243e0 bytes
    // win32kbase.sys .text:0x5c62c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4dbf0, 0x243e0 bytes
    //
    _a8(sdk::unknown_ptr) get_device_configuration_information;
    
    // [DrvGetDeviceFromName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x39d80, 0x1eb80 bytes
    // win32kbase.sys .text:0x3cea0, 0x243e0 bytes
    // win32kbase.sys .text:0x52ce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3c860, 0x243e0 bytes
    //
    _a9(sdk::unknown_ptr) get_device_from_name;
    
    // [DrvGetDeviceFromNameAndValidateDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86940, 0x1eb80 bytes
    // win32kbase.sys .text:0xc04a4, 0x243e0 bytes
    // win32kbase.sys .text:0xd4008, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9f74, 0x243e0 bytes
    //
    _b0(sdk::unknown_ptr) get_device_from_name_and_validate_device;
    
    // [DrvGetDisplayConfigBufferSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x31020, 0x1eb80 bytes
    // win32kbase.sys .text:0x3da70, 0x243e0 bytes
    // win32kbase.sys .text:0x56bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x47cc0, 0x243e0 bytes
    //
    _b1(sdk::unknown_ptr) get_display_config_buffer_sizes;
    
    // [DrvGetDisplayDriverNames]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x362a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8d910, 0x27ef0 bytes
    // win32kbase.sys .text:0x502a0, 0x243e0 bytes
    //
    _b2(sdk::unknown_ptr) get_display_driver_names;
    
    // [DrvGetDisplayDriverParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x120f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x30334, 0x243e0 bytes
    // win32kbase.sys .text:0x8e95c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4b404, 0x243e0 bytes
    //
    _b3(sdk::unknown_ptr) get_display_driver_parameters;
    
    // [DrvGetDriverAccelerationsLevel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f28, 0x1eb80 bytes
    // win32kbase.sys .text:0x36104, 0x243e0 bytes
    // win32kbase.sys .text:0xd4098, 0x27ef0 bytes
    // win32kbase.sys .text:0x50104, 0x243e0 bytes
    //
    _b4(sdk::unknown_ptr) get_driver_accelerations_level;
    
    // [DrvGetDriverCapableOverRide]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e34, 0x1eb80 bytes
    // win32kbase.sys .text:0x35fe4, 0x243e0 bytes
    // win32kbase.sys .text:0xd3a68, 0x27ef0 bytes
    // win32kbase.sys .text:0x4ffe4, 0x243e0 bytes
    //
    _b5(sdk::unknown_ptr) get_driver_capable_over_ride;
    
    // [DrvGetHDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x39cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3bc80, 0x243e0 bytes
    // win32kbase.sys .text:0x52650, 0x27ef0 bytes
    // win32kbase.sys .text:0x3c760, 0x243e0 bytes
    //
    _b6(sdk::unknown_ptr) get_hdev;
    
    // [DrvGetHdevName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24f10, 0x1eb80 bytes
    // win32kbase.sys .text:0x22e40, 0x243e0 bytes
    // win32kbase.sys .text:0x7e2e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x658b0, 0x243e0 bytes
    //
    _b7(sdk::unknown_ptr) get_hdev_name;
    
    // [DrvGetLogPixels]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce0a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc8390, 0x243e0 bytes
    // win32kbase.sys .text:0xd9f10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0f50, 0x243e0 bytes
    //
    _b8(sdk::unknown_ptr) get_log_pixels;
    
    // [DrvGetMonitorOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce0b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x158710, 0x243e0 bytes
    // win32kbase.sys .text:0x18bac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1565b0, 0x243e0 bytes
    //
    _b9(sdk::unknown_ptr) get_monitor_orientation;
    
    // [DrvGetNumberOfPhysicalMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86904, 0x1eb80 bytes
    // win32kbase.sys .text:0xc045c, 0x243e0 bytes
    // win32kbase.sys .text:0xd3fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9f2c, 0x243e0 bytes
    //
    _c0(sdk::unknown_ptr) get_number_of_physical_monitors;
    
    // [DrvGetPreferredMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf010, 0x1eb80 bytes
    // win32kbase.sys .text:0xbd928, 0x243e0 bytes
    // win32kbase.sys .text:0xd1c4c, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7738, 0x243e0 bytes
    //
    _c1(sdk::unknown_ptr) get_preferred_mode;
    
    // [DrvGetPruneFlag]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10e80, 0x1eb80 bytes
    // win32kbase.sys .text:0x40408, 0x243e0 bytes
    // win32kbase.sys .text:0x5a448, 0x27ef0 bytes
    // win32kbase.sys .text:0x4a258, 0x243e0 bytes
    //
    _c2(sdk::unknown_ptr) get_prune_flag;
    
    // [DrvGetRegistryHandleFromDeviceMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5cf68, 0x1eb80 bytes
    // win32kbase.sys .text:0x44bc8, 0x243e0 bytes
    // win32kbase.sys .text:0x5a544, 0x27ef0 bytes
    // win32kbase.sys .text:0x34828, 0x243e0 bytes
    //
    _c3(sdk::unknown_ptr) get_registry_handle_from_device_map;
    
    // [DrvGetRemoteDeviceCount]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143a58, 0x13864 bytes
    // win32kfull.sys .text:0x151600, 0x1596d bytes
    // win32kfull.sys .text:0x145284, 0x1659e bytes
    // win32kfull.sys .text:0x152540, 0x1596d bytes
    //
    _c4(sdk::unknown_ptr) get_remote_device_count;
    
    // [DrvGetSuggestedPhysicalMonitorArraySize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86890, 0x1eb80 bytes
    // win32kbase.sys .text:0xc03d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd3f30, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9ea0, 0x243e0 bytes
    //
    _c5(sdk::unknown_ptr) get_suggested_physical_monitor_array_size;
    
    // [DrvGetWDDMAdapterInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29740, 0x1eb80 bytes
    // win32kbase.sys .text:0x38830, 0x243e0 bytes
    // win32kbase.sys .text:0x51af0, 0x27ef0 bytes
    // win32kbase.sys .text:0x406e0, 0x243e0 bytes
    //
    _c6(sdk::unknown_ptr) get_wddm_adapter_info;
    
    // [DrvInitConsole]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a810, 0x1eb80 bytes
    // win32kbase.sys .text:0x2b1b4, 0x243e0 bytes
    // win32kbase.sys .text:0x6ca40, 0x27ef0 bytes
    // win32kbase.sys .text:0x8a614, 0x243e0 bytes
    //
    _c7(sdk::unknown_ptr) init_console;
    
    // [DrvInitializeDxgkrnlDpiCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81870, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3ee0, 0x243e0 bytes
    // win32kbase.sys .text:0xd6370, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd2a0, 0x243e0 bytes
    //
    _c8(sdk::unknown_ptr) initialize_dxgkrnl_dpi_cache;
    
    // [DrvIsPermanentSettingChangesDisabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10de4, 0x1eb80 bytes
    // win32kbase.sys .text:0xc1550, 0x243e0 bytes
    // win32kbase.sys .text:0xd6bbc, 0x27ef0 bytes
    // win32kbase.sys .text:0x4a054, 0x243e0 bytes
    //
    _c9(sdk::unknown_ptr) is_permanent_setting_changes_disabled;
    
    // [DrvIsSourceInHardwareClone]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82900, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7ac0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9970, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0660, 0x243e0 bytes
    //
    _d0(sdk::unknown_ptr) is_source_in_hardware_clone;
    
    // [DrvIsTemporarySettingChangeDisabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15950, 0x1eb80 bytes
    // win32kbase.sys .text:0x15854, 0x243e0 bytes
    // win32kbase.sys .text:0x63a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x48b10, 0x243e0 bytes
    //
    _d1(sdk::unknown_ptr) is_temporary_setting_change_disabled;
    
    // [DrvIsWddmDriverPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x316ec, 0x1eb80 bytes
    // win32kbase.sys .text:0x3dc78, 0x243e0 bytes
    // win32kbase.sys .text:0x56a58, 0x27ef0 bytes
    // win32kbase.sys .text:0x47ec8, 0x243e0 bytes
    //
    _d2(sdk::unknown_ptr) is_wddm_driver_present;
    
    // [DrvLogDiagDisplayChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13a60, 0x1eb80 bytes
    // win32kbase.sys .text:0x95660, 0x243e0 bytes
    // win32kbase.sys .text:0x63b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x49bc0, 0x243e0 bytes
    //
    _d3(sdk::unknown_ptr) log_diag_display_change;
    
    // [DrvLogDisplayDriverEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe688, 0x1eb80 bytes
    // win32kbase.sys .text:0x2da0c, 0x243e0 bytes
    // win32kbase.sys .text:0x8d068, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0124, 0x243e0 bytes
    //
    _d4(sdk::unknown_ptr) log_display_driver_event;
    
    // [DrvModeChangeCompleteNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1446d4, 0x13864 bytes
    // win32kfull.sys .text:0x1523a8, 0x1596d bytes
    // win32kfull.sys .text:0x146868, 0x1659e bytes
    // win32kfull.sys .text:0x1532e8, 0x1596d bytes
    //
    _d5(sdk::unknown_ptr) mode_change_complete_notify;
    
    // [DrvMoveGraphicsDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81db0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc2f74, 0x243e0 bytes
    // win32kbase.sys .text:0xd53f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc578, 0x243e0 bytes
    //
    _d6(sdk::unknown_ptr) move_graphics_device;
    
    // [DrvNeedToSwitchAdapterForRemoteSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce0e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x158748, 0x243e0 bytes
    // win32kbase.sys .text:0x18bbfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1565e8, 0x243e0 bytes
    //
    _d7(sdk::unknown_ptr) need_to_switch_adapter_for_remote_session;
    
    // [DrvNotifySessionStateChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x83200, 0x243e0 bytes
    // win32kbase.sys .text:0x97280, 0x27ef0 bytes
    // win32kbase.sys .text:0xc74f0, 0x243e0 bytes
    //
    _d8(sdk::unknown_ptr) notify_session_state_change;
    
    // [DrvOcclusionStateChangeNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x36e2c, 0x13864 bytes
    // win32kfull.sys .text:0x2daf4, 0x1596d bytes
    // win32kfull.sys .text:0xc7124, 0x1659e bytes
    // win32kfull.sys .text:0x2df04, 0x1596d bytes
    //
    _d9(sdk::unknown_ptr) occlusion_state_change_notify;
    
    // [DrvOpenLocalGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143c98, 0x13864 bytes
    // win32kfull.sys .text:0x15189c, 0x1596d bytes
    // win32kfull.sys .text:0x145398, 0x1659e bytes
    // win32kfull.sys .text:0x1527dc, 0x1596d bytes
    //
    _e0(sdk::unknown_ptr) open_local_graphics_devices;
    
    // [DrvProbeAndCaptureDevmode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x112b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x2f53c, 0x243e0 bytes
    // win32kbase.sys .text:0x8da40, 0x27ef0 bytes
    // win32kbase.sys .text:0x4a614, 0x243e0 bytes
    //
    _e1(sdk::unknown_ptr) probe_and_capture_devmode;
    
    // [DrvProcessSetDisplayConfigParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce45c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1552cc, 0x243e0 bytes
    // win32kbase.sys .text:0x188608, 0x27ef0 bytes
    // win32kbase.sys .text:0x15316c, 0x243e0 bytes
    //
    _e2(sdk::unknown_ptr) process_set_display_config_parameters;
    
    // [DrvProcessWin32kEscape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73588, 0x1eb80 bytes
    // win32kbase.sys .text:0xb74a8, 0x243e0 bytes
    // win32kbase.sys .text:0xcba18, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1398, 0x243e0 bytes
    //
    _e3(sdk::unknown_ptr) process_win32k_escape;
    
    // [DrvPVPGetFirstActiveMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce18c, 0x1eb80 bytes
    // win32kbase.sys .text:0x158808, 0x243e0 bytes
    // win32kbase.sys .text:0x18bcbc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1566a8, 0x243e0 bytes
    //
    _e4(sdk::unknown_ptr) pvp_get_first_active_monitor;
    
    // [DrvQueryDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x310a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3db60, 0x243e0 bytes
    // win32kbase.sys .text:0x56ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x47db0, 0x243e0 bytes
    //
    _e5(sdk::unknown_ptr) query_display_config;
    
    // [DrvQueryMDEVPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x159f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x84590, 0x243e0 bytes
    // win32kbase.sys .text:0x63b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x49120, 0x243e0 bytes
    //
    _e6(sdk::unknown_ptr) query_mdev_power_state;
    
    // [DrvRealizeHalftonePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d018, 0x13864 bytes
    // win32kfull.sys .text:0x274084, 0x1596d bytes
    // win32kfull.sys .text:0x27402c, 0x1659e bytes
    // win32kfull.sys .text:0x273ff4, 0x1596d bytes
    //
    _e7(sdk::unknown_ptr) realize_halftone_palette;
    
    // [DrvRealizeHalftonePaletteWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d320, 0x13864 bytes
    // win32kfull.sys .text:0x2743f0, 0x1596d bytes
    // win32kfull.sys .text:0x274370, 0x1659e bytes
    // win32kfull.sys .text:0x274360, 0x1596d bytes
    //
    _e8(sdk::unknown_ptr) realize_halftone_palette_wrap;
    
    // [DrvReleaseChangeDisplaySettingLocks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17d88, 0x1eb80 bytes
    // win32kbase.sys .text:0x363a8, 0x243e0 bytes
    // win32kbase.sys .text:0x5f93c, 0x27ef0 bytes
    // win32kbase.sys .text:0x503a8, 0x243e0 bytes
    //
    _e9(sdk::unknown_ptr) release_change_display_setting_locks;
    
    // [DrvReleaseHDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d328, 0x13864 bytes
    // win32kfull.sys .text:0x274408, 0x1596d bytes
    // win32kfull.sys .text:0x274388, 0x1659e bytes
    // win32kfull.sys .text:0x274378, 0x1596d bytes
    //
    _f0(sdk::unknown_ptr) release_hdev;
    
    // [DrvRemoveAdapterLuid]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbbc, 0x1eb80 bytes
    // win32kbase.sys .text:0x83444, 0x243e0 bytes
    // win32kbase.sys .text:0x9743c, 0x27ef0 bytes
    // win32kbase.sys .text:0xc7734, 0x243e0 bytes
    //
    _f1(sdk::unknown_ptr) remove_adapter_luid;
    
    // [DrvSetDisconnectedGraphicsDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ab10, 0x1eb80 bytes
    // win32kbase.sys .text:0x411e0, 0x243e0 bytes
    // win32kbase.sys .text:0x5e704, 0x27ef0 bytes
    // win32kbase.sys .text:0x3b6c0, 0x243e0 bytes
    //
    _f2(sdk::unknown_ptr) set_disconnected_graphics_device;
    
    // [DrvSetDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14100, 0x1eb80 bytes
    // win32kbase.sys .text:0x16470, 0x243e0 bytes
    // win32kbase.sys .text:0x624b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x461a0, 0x243e0 bytes
    //
    _f3(sdk::unknown_ptr) set_display_config;
    
    // [DrvSetDisplayConfigValidateParams]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8b620, 0x1eb80 bytes
    // win32kbase.sys .text:0xd7030, 0x243e0 bytes
    // win32kbase.sys .text:0xeabf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd69f0, 0x243e0 bytes
    //
    _f4(sdk::unknown_ptr) set_display_config_validate_params;
    
    // [DrvSetGraphicsDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x112d8c, 0x13864 bytes
    // win32kbase.sys .text:0x7fd80, 0x243e0 bytes
    // win32kbase.sys .text:0xa84a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8ff80, 0x243e0 bytes
    //
    _f5(sdk::unknown_ptr) set_graphics_devices;
    
    // [DrvSetMDEVPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89f20, 0x1eb80 bytes
    // win32kbase.sys .text:0xd22e0, 0x243e0 bytes
    // win32kbase.sys .text:0xe37d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0c80, 0x243e0 bytes
    //
    _f6(sdk::unknown_ptr) set_mdev_power_state;
    
    // [DrvSetMonitorBrightness]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed80, 0x1eb80 bytes
    // win32kbase.sys .text:0x95860, 0x243e0 bytes
    // win32kbase.sys .text:0x6cea8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc3004, 0x243e0 bytes
    //
    _f7(sdk::unknown_ptr) set_monitor_brightness;
    
    // [DrvSetMonitorPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88728, 0x1eb80 bytes
    // win32kbase.sys .text:0xd00a0, 0x243e0 bytes
    // win32kbase.sys .text:0xe14e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcd050, 0x243e0 bytes
    //
    _f8(sdk::unknown_ptr) set_monitor_power_state;
    
    // [DrvSetPruneFlag]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce8b4, 0x1eb80 bytes
    // win32kbase.sys .text:0x158b80, 0x243e0 bytes
    // win32kbase.sys .text:0x18c014, 0x27ef0 bytes
    // win32kbase.sys .text:0x156a20, 0x243e0 bytes
    //
    _f9(sdk::unknown_ptr) set_prune_flag;
    
    // [DrvSetSharedDevLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbd1c, 0x1eb80 bytes
    // win32kbase.sys .text:0x155598, 0x243e0 bytes
    // win32kbase.sys .text:0x188a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x153438, 0x243e0 bytes
    //
    _g0(sdk::unknown_ptr) set_shared_dev_lock;
    
    // [DrvSetSharedPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbd98, 0x1eb80 bytes
    // win32kbase.sys .text:0x15561c, 0x243e0 bytes
    // win32kbase.sys .text:0x188ad4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1534bc, 0x243e0 bytes
    //
    _g1(sdk::unknown_ptr) set_shared_palette;
    
    // [DrvSetVideoParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xce9e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x158cc0, 0x243e0 bytes
    // win32kbase.sys .text:0x18c154, 0x27ef0 bytes
    // win32kbase.sys .text:0x156b60, 0x243e0 bytes
    //
    _g2(sdk::unknown_ptr) set_video_parameters;
    
    // [DrvSetWddmDeviceMonitorPowerState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8874c, 0x1eb80 bytes
    // win32kbase.sys .text:0xd00f0, 0x243e0 bytes
    // win32kbase.sys .text:0xe1530, 0x27ef0 bytes
    // win32kbase.sys .text:0xcd0a0, 0x243e0 bytes
    //
    _g3(sdk::unknown_ptr) set_wddm_device_monitor_power_state;
    
    // [DrvSortGraphicsDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81d08, 0x1eb80 bytes
    // win32kbase.sys .text:0xc2ebc, 0x243e0 bytes
    // win32kbase.sys .text:0xd5340, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc4c0, 0x243e0 bytes
    //
    _g4(sdk::unknown_ptr) sort_graphics_device_list;
    
    // [DrvTransferGdiObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbe70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1556fc, 0x243e0 bytes
    // win32kbase.sys .text:0x188bb4, 0x27ef0 bytes
    // win32kbase.sys .text:0x15359c, 0x243e0 bytes
    //
    _g5(sdk::unknown_ptr) transfer_gdi_objects;
    
    // [DrvUpdateAttachFlag]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a9c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3256c, 0x243e0 bytes
    // win32kbase.sys .text:0x900e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x512f4, 0x243e0 bytes
    //
    _g6(sdk::unknown_ptr) update_attach_flag;
    
    // [DrvUpdateDisplayDriverParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15ba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x309b4, 0x243e0 bytes
    // win32kbase.sys .text:0x5db2c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4bc14, 0x243e0 bytes
    //
    _g7(sdk::unknown_ptr) update_display_driver_parameters;
    
    // [DrvUpdateDisplayModeInMdev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcbf68, 0x1eb80 bytes
    // win32kbase.sys .text:0x155808, 0x243e0 bytes
    // win32kbase.sys .text:0x188cb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1536a8, 0x243e0 bytes
    //
    _g8(sdk::unknown_ptr) update_display_mode_in_mdev;
    
    // [DrvUpdateDisplayModeInPdev]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcc2d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x155c94, 0x243e0 bytes
    // win32kbase.sys .text:0x189134, 0x27ef0 bytes
    // win32kbase.sys .text:0x153b34, 0x243e0 bytes
    //
    _g9(sdk::unknown_ptr) update_display_mode_in_pdev;
    
    // [DrvUpdateGraphicsDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ada0, 0x1eb80 bytes
    // win32kbase.sys .text:0x40510, 0x243e0 bytes
    // win32kbase.sys .text:0x5ce30, 0x27ef0 bytes
    // win32kbase.sys .text:0x3a9f0, 0x243e0 bytes
    //
    _h0(sdk::unknown_ptr) update_graphics_device_list;
    
    // [DrvUpdatePDevForWDDMDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10404, 0x1eb80 bytes
    // win32kbase.sys .text:0x32654, 0x243e0 bytes
    // win32kbase.sys .text:0xd04f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x4b930, 0x243e0 bytes
    //
    _h1(sdk::unknown_ptr) update_p_dev_for_wddm_device;
    
    // [DrvUpdatePDevForWDDMVidPnSource]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeae8, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf588, 0x243e0 bytes
    // win32kbase.sys .text:0xd045c, 0x27ef0 bytes
    // win32kbase.sys .text:0xb8c38, 0x243e0 bytes
    //
    _h2(sdk::unknown_ptr) update_p_dev_for_wddm_vid_pn_source;
    
    // [DrvUpdateRemoteAdapterInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89820, 0x1eb80 bytes
    // win32kbase.sys .text:0xd232c, 0x243e0 bytes
    // win32kbase.sys .text:0xe3818, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0ccc, 0x243e0 bytes
    //
    _h3(sdk::unknown_ptr) update_remote_adapter_info;
    
    // [DrvUpdateRemoteGraphicsDeviceList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xceeb8, 0x1eb80 bytes
    // win32kbase.sys .text:0x158ff8, 0x243e0 bytes
    // win32kbase.sys .text:0x18c4ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x156e98, 0x243e0 bytes
    //
    _h4(sdk::unknown_ptr) update_remote_graphics_device_list;
    
    // [DrvValidateAndApplyDevMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10f58, 0x1eb80 bytes
    // win32kbase.sys .text:0x2f2f0, 0x243e0 bytes
    // win32kbase.sys .text:0x8d560, 0x27ef0 bytes
    // win32kbase.sys .text:0x4a3c8, 0x243e0 bytes
    //
    _h5(sdk::unknown_ptr) validate_and_apply_dev_mode;
    
    // [DrvWriteAttachedSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x16118, 0x1eb80 bytes
    // win32kbase.sys .text:0x30f38, 0x243e0 bytes
    // win32kbase.sys .text:0x5e0a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x4c198, 0x243e0 bytes
    //
    _h6(sdk::unknown_ptr) write_attached_settings;
    
    // [DrvWriteDisplayDriverParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15c94, 0x1eb80 bytes
    // win32kbase.sys .text:0x30aa8, 0x243e0 bytes
    // win32kbase.sys .text:0x5dc14, 0x27ef0 bytes
    // win32kbase.sys .text:0x4bd08, 0x243e0 bytes
    //
    _h7(sdk::unknown_ptr) write_display_driver_parameters;
};
#include "magic/api.end.hpp"
