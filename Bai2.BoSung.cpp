//	Su dung hang so PI

//#define _USE_MATH_DEFINES
//#include <iostream> 
//#include <cmath>
//using namespace std;
//int main()
//{
//	cout << M_PI  << endl;
//
//	return 0;
//}




// Hiện thị kết quả phần thập phân theo ý muốn.

#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(20) << M_PI  << endl;	// lấy 20 số sau dấu phẩy

	return 0;
}
