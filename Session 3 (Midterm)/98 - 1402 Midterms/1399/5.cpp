#include <iostream>
#include <SDL2/SDL.h> // window and renderer and basic configure
#include <SDL2/SDL_image.h> // loading BitMap images on window
#include <SDL2/SDL2_gfx.h> // extra useful function
#include <string>
#include <math.h>

// by MohammadAmin Alamalhoda  ma.alamalhoda@gmail.com

void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
using namespace std;


int main( int argc, char * argv[] )
{
    int W = 1000;
    int L = 1000;
    int n,d;
    cin>>n>>d;
    // be ina kari nadashte bashid
    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    //Pass the focus to the drawing window
    SDL_RaiseWindow(m_window);
    //Get screen res olution
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    // be ina kari nadashte bashid


    // be window rang midim
    window_color(m_renderer,255,255,255);

    // mostatil to khali ya to por ba rang delkhah mikeshe
    //rect(m_renderer,400,200,200,200,0,0,0,0);

    // ellipse to khali ya to por ba rang delkhah mikeshe
    //ellipse(m_renderer,400,200,100,100,255,0,0,0);

    window_color(m_renderer,255,255,255);
    int x0,y0,x1=W/2,y1=(L/2)+100,D;
    D=d;
    x0=500;
    y0=500;
    int width=5;
    int i=0;
    while(1){
        rect(m_renderer,x0,y0,width,d,0,0,0,1);
        i++;
        if(i==n) break;
        y0=y0+d;
        rect(m_renderer,x0,y0,d,width,0,0,0,1);
        i++;
        if(i==n) break;
        rect(m_renderer,x0+d,y0-(D+d),width,D+d,0,0,0,1);
        i++;
        if(i==n) break;
        rect(m_renderer,x0-D,y0-(D+d),D+d,width,0,0,0,1);
        i++;
        if(i==n) break;
        x0=x0-D;
        y0=y0-(D+d);
        d=2*D+d;
    }










int RNX = 200, RNY = 200;
SDL_Event *event = new SDL_Event();

while (1)
        {


        if( SDL_PollEvent( event ) )
        {
            //If a key was pressed
            if( event->type == SDL_KEYDOWN )
            {
                //Set the proper message surface
                switch( event->key.keysym.sym )
                {
                    case SDLK_w:
                        RNY = RNY+50;

                    case SDLK_s:
                        RNY = RNY-50;

                    case SDLK_a:
                        RNX = RNX-50;

                    case SDLK_d:
                        RNX = RNX+50;

                }
                //clear_object(m_renderer, 255, 255, 255);
                //rect(RNX,RNY,40,40,0,0,0,m_renderer);
            }

            //If the user has Xed out the window
            else if( event->type == SDL_QUIT )
            {
                //Quit the program
                SDL_DestroyWindow( m_window );
                SDL_DestroyRenderer( m_renderer );
                IMG_Quit();
                SDL_Quit();
                return 0;
            }
        }
        }

}

void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian )
{
    SDL_Rect rectangle ;
    rectangle.x = x;
    rectangle.y = y;
    rectangle.w = w;
    rectangle.h = h;


    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);
    if (fill_boolian==1)
        SDL_RenderFillRect(Renderer, &rectangle);
    SDL_RenderDrawRect(Renderer, &rectangle);
    SDL_RenderPresent(Renderer);

}

void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian)
{
    if(fill_boolian==1)
        filledEllipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
    if(fill_boolian==0)
        ellipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
    SDL_RenderPresent(Renderer);
}

void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{
    SDL_SetRenderDrawColor( Renderer, R, G, B, 255 );
    SDL_RenderClear( Renderer );

    // Show the window
    SDL_RenderPresent( Renderer );

}

