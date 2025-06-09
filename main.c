#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int fun1(double i,int width,int precision){
    double c;
    if (i<0)c=0;
    else c=1;
    printf("%*.*f",width,precision,c);
    return 0;
}
int fun2(double i,int width,int precision){
    double c;
    if (i<=0)c=0;
    else c=i;
    printf("%*.*f",width,precision,c);
    return 0;
}
int fun3(double i,int width,int precision){
    double c;
    c=(1.0/2)*(i+sqrt((i*i)+2));
    printf("%*.*f",width,precision,c);
    return 0;
}
int fun4(double i,int width,int precision){
    double c;
    c=exp(-(i*i));
    printf("%*.*f",width,precision,c);
    return 0;
}
int fun5(double i,int width,int precision){
    double c;
    c=(exp(i)-exp(-i))/((exp(i)+exp(-i)));
    printf("%*.*f",width,precision,c);
    return 0;
}
int fun6(double i,int width,int precision){
    double c;
    c=i/(1+exp(-(0.5*i)));
    printf("%*.*f",width,precision,c);
    return 0;
}
int min(double x_start,double x_stop,double step,int precision,int width,int znamenko,bool excuted){
    if((x_stop-x_start)<=0) {
        printf("E2\n");
        return 0;
    }
    if (excuted){
        printf("%*c",width, 'x');
        for (double i=x_start;i<= x_stop;i+=step){
            printf("%*.*f",width,precision,i);
        }
        printf("\n");
    }
        if(znamenko==1){
        printf("%*c",width, '1');
        for (double i=x_start;i<= x_stop;i+=step){
            fun1(i,width,precision);
        }
            printf("\n");
        }
        else if(znamenko==2){
                printf("%*c",width, '2');
                for (double i=x_start;i<= x_stop;i+=step){
                    fun2(i,width,precision);
                }
            printf("\n");
            }
        else if(znamenko==3){
                printf("%*c",width, '3');
                for (double i=x_start;i<= x_stop;i+=step){
                    fun3(i,width,precision);
                }
            printf("\n");
            }
        else if(znamenko==4){
                printf("%*c",width, '4');
                for (double i=x_start;i<= x_stop;i+=step){
                    fun4(i,width,precision);
                }
            printf("\n");
            }
        else if(znamenko==5){
                printf("%*c",width, '5');
                for (double i=x_start;i<= x_stop;i+=step){
                    fun5(i,width,precision);
                }
            printf("\n");
            }
        else if(znamenko==6){
                printf("%*c",width, '6');
                for (double i=x_start;i<= x_stop;i+=step){
                    fun6(i,width,precision);
                }
            printf("\n");
            }
    return 0;
}
int avtoe(double x_start,double x_stop,double step,int precision,int width){
    if((x_stop-x_start)<=0) {
        printf("E2\n");
        return 0;
    }
    printf("%*c",width, 'x');
    printf("%*c",width, '1');
    printf("%*c",width, '2');
    printf("%*c",width, '3');
    printf("%*c",width, '4');
    printf("%*c",width, '5');
    printf("%*c",width, '6');
    printf("\n");
    for (double i=x_start;i<= x_stop;i+=step){
    printf("%*.*f",width,precision,i);
    fun1(i,width,precision);
    fun2(i,width,precision);
    fun3(i,width,precision);
    fun4(i,width,precision);
    fun5(i,width,precision);
    fun6(i,width,precision);
    printf("\n");
    }
    return 0;
}
int main(void) {
    bool executed=true;
    double x_start,x_stop,step;
    int precision,width;
    char znamenko[20];
    if (scanf("%lf %lf %lf %d %d", &x_start, &x_stop, &step, &precision, &width) != 5) {
        printf("E1\n");
        return 0;
    }
    scanf("%19s", znamenko);
    if((x_stop-x_start)<=0) {
        printf("E2\n");
        return 0;
    }
    if ( znamenko[0]<= 47 || znamenko[0]>= 58){
        avtoe(x_start, x_stop,step,precision,width);
        return 0;
    }
    int number = atoi(znamenko);
    if(number>= 1 && number<=6){
    min(x_start, x_stop,step,precision,width,number,executed);
    executed=false;
    }
    while (znamenko[0]>= 47 && znamenko[0]<= 58){
             scanf("%19s",znamenko);
             number = atoi(znamenko);
        if(number>= 1 && number<=6){
            min(x_start, x_stop,step,precision,width,number,executed);
            executed=false;
        }
     }
}


