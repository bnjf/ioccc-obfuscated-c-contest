#include<stdint.h>//       4                                                
#include<stdio.h>/*      76.                               1                
                         ..2321     1       57             3                
                         21....     .       ..             .11         1   2
                    1  88..1321  2  33    5512      1      277        14   1
                    099..12....  .  ..    ....    1 4 11111...111 122 5.1  .
                  11...221.821112411123455676489  51.176543232666 902 .27  1
                  10111...1.....................11.417...........1...21..11.
                  ..2239921176566156225563322299887...6533233233182469196894
                  22...............................111......................
*///              3269548556987776665556662131223412347543332334543322223456
/*                                                                          
          13.3.37 */char C[120]  [60   ];int R[120][60],W,H,J,K,B[61][61],/*
          12.2.39 */r,i,j,c,*q  =&   H,t=7200,x,y,k;int64_t*U,T[28800],*S=/*
          11.2.40 */T,O[120],  Z[   120],v,z;void D(){for(k=-1;7200>++k;S[/*
            10.39 */k]=v)r=!         ~(v=U[k])&&*R[k/60]?2:S[k]-v?1:r;;;;}/*
             9.36 */void L(             ){for(r=1;r==1;){r=3;;for(i=0;120>/*
             9.31 */i;i++){                  for(k=z=1,j=0;v=R[i][j];j++)O/*
           8.3.32 */[i]|=(  1LL             <<v)-1<<k,k+=v,0,Z[i]=z|=1LL<</*
           7.3.30 */k++;;  v=~                (3LL<<k-2);for(j=-61;++j<60;/*
           5.3.29 */v=(   v|~                  z)&(j<0?v>>1:v<<1|1))v=S[60/*
       3.1.3.1.28 */*         i    +(j        < 0?~j:j)]|=j?v:~3;}for(z=0;/*
         1.2.4.31 ;         */    7200       >z;z++)i=z/60,j=z%60,(B[i<60?/*
           7.5.31     */i:j][   i<60?        j:i-60]=~S[z]&O[i]?~S[z]&Z[i]/*
         1.6.5.30 ;  */?r=0    :(U=O          ,1):(U=Z,2))?k=i<60?j+60:j,S/*
       5.10.12.16 */[i%    60+60*k]|=         ~U[k]:0;U=S;  S-=t*=-1;D();z/*
    5.11.5.4.12.4 */*9;  }}int main(          ){for  (;K=  scanf("%d",R [*/*
    15.2.4.4.11.5 */q+c*60]+j)<1?          q= &W,j  --,2   >++c:'\n';j =-K/*
   16.3.4.2.2.5.5 */+getchar()?j+1        :++ *q*0   );     L(   );;if (!r/*
         14.8.7.3 */)for(K=0;K<W          *60;K++)              if(K%60  </*
     12.1.4.1.6.2 */W&!B[K/60]          [ K%60 ]                  ){for(  /*
       11.3.4.6.1 */c=64;c--;         )if (!(1                     &S[K/*  ;
     10.1.8.8.5.1 */]>>c))U=        S ,000,S+=         J=14400,     D()/*  ;
         9.8.11.5 */,S[K]=~         (1LL<<c)         ,L(),S-=J,S    [K]/*   
    9.5.6.1.2.4.1 */|=r==2?          1LL<<          c:0;L(  ) ;}     q=/*  ;
        9.3.5.1.5 */&K;;for           (J=          K=i=0       ;    120/*   
        3.2.6.5.1 */>    i;                       Z[i]=k            --,/*  ;
        2.6.3.5.1 */                             i>59?q    =&J     :0,/*   ;
    2.1.2.6.3.6.1 */ *     q<                    k?*q=k    :0,    0,C[/*   ;
2.1.2.2.1.5.2.5.1 */ i  ++  ][                k  ]=' '     ){     j=k/*    ;
    2.1.2.5.5.6.3 */ =  0;  for(;         x=R[i  ][j++]            ;/*      
      4.1.9.7.5.1 */0)  k  +=sprintf   ((00,C[    i]+/*                    ;
       5.19.6.1.2 */k), "%d.",x);}i=~J;;r&1       ||puts        (         /*
         24.6.3.3 */r?"invalid":"failed");         for(;i      <H;       i/*
     24.1.2.9.7.4 */++,puts(""))for(j=~K;j  <  W;  )putchar( i<0?j<0    ||/*
        25.1.2.25 */(k=i+Z[j+60])<0?' ':C[j +  60  ][k]:j<00?(k=j+Z[i])<0?/*
          28.1.26 */' ':C[i][k]:"?X "[B[i][j]]  ) ,j++;return 0;} /* 2012 */
