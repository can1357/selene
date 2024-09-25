#include "generator.hpp"
#include <xstd/environment.hpp>

#include <pdblib/pdb.hpp>
#include <xstd/file_view.hpp>
#include <xstd/numeric_range.hpp>
int main()
{
	sdk::generate( xstd::getenvf( "SeleneRoot" ) / "resources" / "sdk" );
	return 0;
}
