#include "attribute_discovery.hpp"
#include "../utility/llvm.hpp"

#include <xstd/random.hpp>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#include <xstd/algorithm.hpp>
#include <xstd/formatting.hpp>
#include <apollo/attributes.hpp>

void linker::transform::discover_attributes( collection& col )
{
    // Enumerate every LLVM object:
    //
    for ( auto& obj : col.working_set )
    {
        auto& mod = obj->llvm;
        if ( !mod ) continue;

        // Get the annotation information.
        //
        LLVMValueRef annotation_array = LLVMGetNamedGlobal( mod, "llvm.global.annotations" );
        if ( !annotation_array ) continue;
        
        // Get its elements.
        //
        annotation_array = LLVMGetInitializer( annotation_array );
        for ( size_t n = 0; n != LLVMGetArrayLength( LLVMTypeOf( annotation_array ) ); n++ )
        {
            if ( LLVMValueRef entry = LLVMGetOperand( annotation_array, n ) )
            {
                // Skip if entry is shorter than two.
                //
                size_t operand_cnt = LLVMGetNumOperands( entry );
                if ( operand_cnt < 2 ) continue;

                // #0 = &function / &global, #1 = &str
                //
                LLVMValueRef str = LLVMGetOperand( LLVMGetOperand( entry, 1 ), 0 );
                if (str && !LLVMIsConstantString(str)) {
                    if (LLVMIsAGlobalVariable(str)) {
                        str = LLVMGetInitializer(str);
                    }
                }
                if (!str) continue;

                // Skip if it does not start with the prefix.
                //
                size_t len;
                std::string_view attr_name{ LLVMGetAsString( str, &len ) , len - 1 };
                if ( xstd::istarts_with( attr_name, APOLLO_ANNOTATION_PREFIX ) )
                {
                    attr_name.remove_prefix( xstd::strlen( APOLLO_ANNOTATION_PREFIX ) );

                    // Add it onto the list.
                    //
                    LLVMValueRef annotated = LLVMGetOperand(entry, 0);
                    if (!LLVMIsAGlobalValue(annotated)) {
                        annotated = LLVMGetOperand(annotated, 0);
                    }
                    std::string nattr_name = /*xstd::to_lower*/std::string(attr_name);
                    obj->attributes.add( annotated, nattr_name );

                    // Append into collection attributes as well.
                    //
                    std::string linked_name = LLVMGetValueName( annotated );
                    switch ( LLVMGetLinkage( annotated ) )
                    {
                        // static:
                        //
                        case LLVMInternalLinkage:
                        case LLVMPrivateLinkage:
                        {
                            if ( linked_name.find( "@ifn@" ) == std::string::npos )
                            {
                                std::string old_name = linked_name;
                                linked_name += "@ifn@" + std::to_string( xstd::time::monotonic() );
                                LLVMSetValueName( annotated, linked_name.c_str() );
                                for ( auto& scn : obj->sections )
                                    for ( auto& sym : scn->symbols )
                                        if ( sym->name == old_name )
                                            sym->name = linked_name;
                            }
                            [[fallthrough]];
                        }
                        // extern:
                        //
                        case LLVMExternalLinkage:
                        case LLVMAvailableExternallyLinkage:
                        case LLVMLinkOnceAnyLinkage:
                        case LLVMLinkOnceODRLinkage:
                        case LLVMWeakAnyLinkage:
                        case LLVMWeakODRLinkage:
                        case LLVMCommonLinkage:
                        {
                            col.attributes.add( linked_name, nattr_name );
                            break;
                        }
                        default: break;
                    }
                }
            }
        }

    }
}
