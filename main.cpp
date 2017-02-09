#include <library_1/library_1.h>
#include <library_2/library_2.h>

int main(int /*argc*/, char* /*argv*/[])
{
	Library2::ShowCaption();
	Object object;
	return object.execute();
}
