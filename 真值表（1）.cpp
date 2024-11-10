//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 1
//int main()
//{
//    int p, q,  r;
//    bool result;
//    printf("1代表T,0代表F\n");
//    printf("((p&~q)|r)<=>(p->r)的表示结果:\n");
//    for (p = 0; p <= N; p++)
//    {
//        for (q = 0; q <= N; q++)
//        {
//            for (r = 0; r <= N; r++)
//            { 
//                    result = (((p && !q) || r)&& (!p || r) )||( !((p && !q) || r) && !(!p || r));
//                    printf("p=%d q=%d r=%d  result=%d  \n", p, q, r, result);
//               
//            }
//        }
//    }
//    return 0;
//}