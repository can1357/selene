#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/space_tape_marks_t.start.hpp"
namespace stor::port
{
    // [struct _SPACE_TAPE_MARKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct space_tape_marks_t                                         
    {                                                                 
        union u0_byte6_t                                              
        {                                                             
            struct u5_fields_t                                        
            {                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
                //                                                    
                _m07 uint1_t link;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Link
                _m08 uint1_t flag;                                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Flag
                _m09 uint2_t vendor_unique;                             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .VendorUnique
                                                                      
                SDK_NONVOL_PROPERTIES( "_SPACE_TAPE_MARKS.Byte6.Fields.$", 0x1, true, 0xd072b9dd857a1207 );                                         
                SDK_FIXED_SIZE( u5_fields_t, 0x1 );                                         
            };                                                        
                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                        
            _m06 uint8_t                   value;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .value
            _m10 u5_fields_t               fields;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Fields
                                                                      
            SDK_NONVOL_PROPERTIES( "_SPACE_TAPE_MARKS.Byte6.$", 0x1, true, 0x34eeba6d507e841 );                           
            SDK_FIXED_SIZE( u0_byte6_t, 0x1 );                           
        };                                                            
                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 uint8_t                              operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                              code;                 //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Code
        _m02 uint3_t                              logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint8_t                              num_marks_msb;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NumMarksMSB
        _m04 uint8_t                              num_marks;            //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .NumMarks
        _m05 uint8_t                              num_marks_lsb;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumMarksLSB
        _m11 u0_byte6_t                           byte6;                //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Byte6
                                                                      
        SDK_NONVOL_PROPERTIES( "_SPACE_TAPE_MARKS.$", 0x6, true, 0xd467bdeac918bf89 );                    
        SDK_FIXED_SIZE( space_tape_marks_t, 0x6 );                    
    };                                                                
};
#include "magic/space_tape_marks_t.end.hpp"
SDK_VERIFY( struct stor::port::space_tape_marks_t::u0_byte6_t::u5_fields_t, 0x1 );
SDK_VERIFY( union stor::port::space_tape_marks_t::u0_byte6_t, 0x1 );
SDK_VERIFY( struct stor::port::space_tape_marks_t, 0x6 );
