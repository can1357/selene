#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_CLIENTHINT]
    //  WDK 10
    //
    enum class clienthint_t : int32_t   
    {                                   
        clienthint_unknown =    0x0,      // WDK 10
        clienthint_opengl =     0x1,      // WDK 10
        clienthint_cdd =        0x2,      // WDK 10
        clienthint_opencl =     0x3,      // WDK 10
        clienthint_vulkan =     0x4,      // WDK 10
        clienthint_cuda =       0x5,      // WDK 10
        clienthint_reserved =   0x6,      // WDK 10
        clienthint_dx7 =        0x7,      // WDK 10
        clienthint_dx8 =        0x8,      // WDK 10
        clienthint_dx9 =        0x9,      // WDK 10
        clienthint_dx10 =       0xa,      // WDK 10
        clienthint_dx11 =       0xb,      // WDK 10
        clienthint_dx12 =       0xc,      // WDK 10
        clienthint_9on12 =      0xd,      // WDK 10
        clienthint_11on12 =     0xe,      // WDK 10
        clienthint_mft_encode = 0xf,      // WDK 10
        clienthint_max =        0x10,     // WDK 10
    };                                  
};
