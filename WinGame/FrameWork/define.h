


#ifndef __NS_FRAMEWORK__

#define __NS_FRAMEWORK__
#include <d3d9.h>		// d3d9.lib
#include <d3dx9.h>		// d3dx9.lib
#include <dinput.h>		// dinput8.lib, dxguid.lib

#include <windows.h>
#include <exception>
using namespace std;

enum eID
{
	FLOWER
};

typedef D3DXVECTOR3 GVector3;
typedef D3DXVECTOR2 GVector2;

#define NS_FRAMEWORK		namespace FrameWork

#define NS_FRAMEWORK_BEGIN	{

#define NS_FRAMEWORK_END	}

#define US_FRAMEWORK		using namespace FrameWork;


#endif // !__NS_FRAMEWORK__
