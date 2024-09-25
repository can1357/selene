#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_property_bag_marshaler
{
    // [AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62f0c, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) add_property_update;
    
    // [EmitSetBooleanProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeacfc, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_boolean_property;
    
    // [EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xead84, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_color_property;
    
    // [EmitSetMatrix3x2Property@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x630a8, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_matrix3x2_property;
    
    // [EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62fb8, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_matrix4x4_property;
    
    // [EmitSetProperties@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x631dc, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_properties;
    
    // [EmitSetQuaternionProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeae28, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_quaternion_property;
    
    // [EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x63158, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_scalar_property;
    
    // [EmitSetVector2Property@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeaecc, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_vector2_property;
    
    // [EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeaf58, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_vector3_property;
    
    // [EmitSetVector4Property@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeafec, 0x1eb80 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_vector4_property;
    
    // [EmitUpdateCommands@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62d30, 0x1eb80 bytes
    //
    _n1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62d80, 0x1eb80 bytes
    //
    _n2(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62d90, 0x1eb80 bytes
    //
    _n3(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x63480, 0x1eb80 bytes
    //
    _n4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x63310, 0x1eb80 bytes
    //
    _n5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb090, 0x1eb80 bytes
    //
    _n6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb0c0, 0x1eb80 bytes
    //
    _n7(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62d98, 0x1eb80 bytes
    //
    _n8(sdk::unknown_ptr) update_property_value;
};
#include "magic/api.end.hpp"
