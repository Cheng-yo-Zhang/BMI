# include <windows.h>
# include <stdio.h>

int main(void)   
{               
    int x,y; 
	while(1)//死迴圈 
    {
		x = rand()%1920;//隨機數 
        y = rand()%1080;//隨機數
        SetCursorPos(x,y);//滑鼠移到螢幕的指定位置
    }
    
    return 0 ;     
			  
}         