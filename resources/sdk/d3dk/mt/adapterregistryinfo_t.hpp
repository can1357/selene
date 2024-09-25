#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapterregistryinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTERREGISTRYINFO]
    // => WDK 10 (NV)
    //
    struct adapterregistryinfo_t                     
    {                                                
        // WDK 10                                    
        //                                           
        _m00 sdk::array<wchar_t, 260> adapter_string;  //{ +0x0000    } | .AdapterString
        _m01 sdk::array<wchar_t, 260> bios_string;     //{ +0x0208    } | .BiosString
        _m02 sdk::array<wchar_t, 260> dac_type;        //{ +0x0410    } | .DacType
        _m03 sdk::array<wchar_t, 260> chip_type;       //{ +0x0618    } | .ChipType
                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTERREGISTRYINFO.$", 0x0, false, 0x3aa659ca25c82aa3 );               
        SDK_FIXED_SIZE( adapterregistryinfo_t, 0x820 );               
    };                                               
};
#include "magic/adapterregistryinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapterregistryinfo_t, 0x820 );
