//
//const int MAXN=400;
//db f[MAXN+2][MAXN+2];
//db g[MAXN+2][MAXN+2];
//
//void calc()
//{
//	f[0][0]=1.0;
//	ft(i,0,MAXN) g[0][i]=1.0;
//	ft(i,1,MAXN)
//	{
//		int total=i-1;
//		ft(l,0,total)
//		{
//			int r=total-l;
//			ft(h,1,i)
//			{
//				f[i][h]+=(1/db(i))*(f[l][h-1]*g[r][h-1]+f[r][h-1]*g[l][h-1]-f[l][h-1]*f[r][h-1]);
//			}
//		}
//		ft(h,1,MAXN) g[i][h]=g[i][h-1]+f[i][h];
//		//ft(h,0,i) cout<<i<<":"<<h<<":"<<f[i][h]<<endl;
//	}
//	cout<<"db ans[]={0";
//	ft(n,1,MAXN)
//	{
//		db ans=0;
//		ft(i,0,n) ans+=f[n][i]*i;
//		cout<<",";
//		pdb(8,ans);
//	}
//	cout<<"};"<<endl;
//}

#include <stdio.h>
double ans[]={0,1.00000000,2.00000000,2.66666667,3.33333333,3.80000000,4.26666667,4.66984127,5.01746032,5.34038801,5.64109347,5.91661376,6.17005291,6.40653371,6.62937380,6.83998769,7.03909518,7.22752621,7.40636064,7.57670999,7.73952289,7.89552958,8.04528080,8.18921689,8.32772553,8.46117321,8.58991360,8.71428285,8.83459141,8.95111841,9.06411035,9.17378376,9.28032989,9.38392004,9.48471017,9.58284448,9.67845768,9.77167632,9.86261934,9.95139831,10.03811751,10.12287404,10.20575804,10.28685310,10.36623672,10.44398090,10.52015270,10.59481481,10.66802603,10.73984177,10.81031434,10.87949330,10.94742566,11.01415607,11.07972698,11.14417873,11.20754967,11.26987626,11.33119312,11.39153317,11.45092771,11.50940647,11.56699776,11.62372852,11.67962444,11.73471001,11.78900862,11.84254266,11.89533354,11.94740178,11.99876708,12.04944832,12.09946369,12.14883063,12.19756595,12.24568582,12.29320579,12.34014087,12.38650549,12.43231358,12.47757855,12.52231334,12.56653042,12.61024182,12.65345916,12.69619365,12.73845610,12.78025698,12.82160639,12.86251409,12.90298953,12.94304185,12.98267991,13.02191228,13.06074726,13.09919291,13.13725703,13.17494719,13.21227076,13.24923487,13.28584644,13.32211223,13.35803876,13.39363240,13.42889935,13.46384561,13.49847703,13.53279932,13.56681800,13.60053848,13.63396601,13.66710569,13.69996251,13.73254131,13.76484683,13.79688367,13.82865631,13.86016914,13.89142642,13.92243230,13.95319086,13.98370604,14.01398172,14.04402166,14.07382956,14.10340899,14.13276349,14.16189647,14.19081130,14.21951125,14.24799951,14.27627923,14.30435347,14.33222521,14.35989739,14.38737288,14.41465449,14.44174494,14.46864695,14.49536313,14.52189606,14.54824828,14.57442223,14.60042036,14.62624504,14.65189857,14.67738326,14.70270132,14.72785495,14.75284630,14.77767746,14.80235050,14.82686744,14.85123028,14.87544095,14.89950137,14.92341341,14.94717891,14.97079967,14.99427747,15.01761404,15.04081110,15.06387031,15.08679333,15.10958177,15.13223721,15.15476122,15.17715534,15.19942105,15.22155985,15.24357318,15.26546248,15.28722915,15.30887456,15.33040008,15.35180704,15.37309675,15.39427050,15.41532955,15.43627516,15.45710856,15.47783095,15.49844351,15.51894743,15.53934384,15.55963389,15.57981868,15.59989931,15.61987687,15.63975241,15.65952699,15.67920163,15.69877734,15.71825514,15.73763599,15.75692088,15.77611075,15.79520655,15.81420921,15.83311963,15.85193873,15.87066737,15.88930645,15.90785681,15.92631932,15.94469480,15.96298407,15.98118797,15.99930727,16.01734278,16.03529528,16.05316553,16.07095428,16.08866230,16.10629030,16.12383903,16.14130920,16.15870151,16.17601666,16.19325534,16.21041823,16.22750600,16.24451931,16.26145881,16.27832515,16.29511896,16.31184087,16.32849149,16.34507144,16.36158133,16.37802174,16.39439326,16.41069647,16.42693196,16.44310027,16.45920198,16.47523762,16.49120776,16.50711292,16.52295363,16.53873043,16.55444383,16.57009434,16.58568246,16.60120870,16.61667356,16.63207751,16.64742105,16.66270464,16.67792876,16.69309387,16.70820043,16.72324891,16.73823974,16.75317337,16.76805023,16.78287078,16.79763542,16.81234459,16.82699870,16.84159817,16.85614341,16.87063483,16.88507281,16.89945777,16.91379009,16.92807016,16.94229836,16.95647507,16.97060066,16.98467552,16.99869999,17.01267445,17.02659925,17.04047475,17.05430131,17.06807926,17.08180894,17.09549071,17.10912490,17.12271184,17.13625185,17.14974527,17.16319242,17.17659361,17.18994916,17.20325939,17.21652461,17.22974511,17.24292121,17.25605320,17.26914138,17.28218604,17.29518748,17.30814598,17.32106183,17.33393531,17.34676670,17.35955628,17.37230431,17.38501108,17.39767685,17.41030189,17.42288645,17.43543081,17.44793522,17.46039993,17.47282520,17.48521127,17.49755841,17.50986685,17.52213684,17.53436861,17.54656242,17.55871849,17.57083706,17.58291837,17.59496263,17.60697009,17.61894097,17.63087549,17.64277387,17.65463634,17.66646311,17.67825440,17.69001042,17.70173138,17.71341750,17.72506898,17.73668603,17.74826885,17.75981765,17.77133262,17.78281398,17.79426190,17.80567660,17.81705826,17.82840707,17.83972323,17.85100693,17.86225835,17.87347767,17.88466509,17.89582079,17.90694494,17.91803772,17.92909932,17.94012990,17.95112965,17.96209874,17.97303733,17.98394561,17.99482373,18.00567188,18.01649020,18.02727887,18.03803805,18.04876790,18.05946859,18.07014027,18.08078310,18.09139724,18.10198284,18.11254006,18.12306905,18.13356996,18.14404295,18.15448815,18.16490573,18.17529583,18.18565859,18.19599416,18.20630268,18.21658429,18.22683914,18.23706737,18.24726910,18.25744450,18.26759368,18.27771678,18.28781395,18.29788530,18.30793099,18.31795113,18.32794586,18.33791530,18.34785960,18.35777887,18.36767323,18.37754283,18.38738777,18.39720820,18.40700421,18.41677595,18.42652353,18.43624707,18.44594669,18.45562251,18.46527464,18.47490321,18.48450833};

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		printf("%.5f\n",ans[n]);
	}
}
