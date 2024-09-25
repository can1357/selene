#pragma once
#include <sdkgen/support_library.hpp>
#include "co_address_t.hpp"

#include "magic/co_address_list_t.start.hpp"
namespace ndis
{
    // [struct _CO_ADDRESS_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_address_list_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 uint32_t                  number_of_addresses_available;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAddressesAvailable
        _m01 uint32_t                  number_of_addresses;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfAddresses
        _m02 struct ndis::co_address_t address_list;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddressList
                                                                     
        SDK_MAGIC_PROPERTIES( "_CO_ADDRESS_LIST.$", 0x10, true, 0x1539727f9365c6c5 );                              
        SDK_FIXED_SIZE( co_address_list_t, 0x10 );                              
    };                                                               
};
#include "magic/co_address_list_t.end.hpp"
SDK_VERIFY( struct ndis::co_address_list_t, 0x10 );
