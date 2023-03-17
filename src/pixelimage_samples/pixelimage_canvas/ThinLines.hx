package pixelimage_samples.pixelimage_canvas;

import htmlHelper.canvas.CanvasSetup;
import htmlHelper.canvas.Surface;

import pixelimageXY.Pixelshape;
import pixelimageXY.Pixelimage;
import pixelimageXY.triangleGML.TriangleGML;

import pixelimageXY.algo.Xiolin_Wu_Line;

function main() new ThinLines();
class ThinLines {
    
    public function new(){
        var canvasSetup = new CanvasSetup( false );
        var surface = canvasSetup.surface;
        canvasSetup.factor = 1/0.8;
        canvasSetup.overSampleCanvas();
        var me: js.html.CanvasRenderingContext2D = surface.me;
        var pixelShape = new Pixelshape( 1024*4, 768*4 );
        pixelShape.transparent = true;
        pixelShape.simpleRect( 0, 0, pixelShape.width, pixelShape.height, 0xFF010101 );
        //var parser = new TriangleGML( pixelShape );
        //parser.addShape( backGround, 10, 10 );
        //parser.addShape( aGrid,      10, 10 );
        var midX = 400;
        var midY = 400;
        var radius = 280;
        var x = 0.;
        var y = 0.;
        var num = 18*2;
        var step = 2*Math.PI/num;
        var theta = 0.;
        for( i in 0...num ){
            x = midX + radius * Math.sin( theta );
            y = midY + radius * Math.cos( theta );
            trace( x + ' ' + y );
            theta += step;
            var j = i%colors.length;
            xWuLine( ( cast pixelShape: Pixelimage ), midX, midY, x, y, colors[j], 0.75 );
            xWuLine( ( cast pixelShape: Pixelimage ), midX, midY, x, y, colors[j], 0.75 );
            //xWuLine4( ( cast pixelShape: Pixelimage ), midX, midY, x, y, colors[i], 0.75 );
            //pixelShape.fillLine( midX, midY, x, y, 3, colors[i] );
        }
      /*parser.renderPromise().then(
            ( _ ) -> pixelShape.drawToContext( surface.me, 0, 0 )
        );*/
        pixelShape.drawToContext( surface.me, 0, 0 );
        //me.filter = "blur(10px)";
    }
}

var colors = [
    0xFDFF0000 // red
  , 0xFDFF7F00 // orange
  , 0xFDFFFF00 // yellow
  , 0xFD00ff00 // green
  , 0xFD0000FF // blue
  , 0xFD4b0082 // indigo
  , 0xFD9400D3 // violet
  , 0xFDD2D0C1  
  , 0xFDCD8028
  , 0xFDD29D11
  , 0xFDE37128
  , 0xFDF06771
  , 0xFDD23931
  , 0xFDAF2C31
  , 0xFD90333E
  , 0xFD863D50
  , 0xFD584A5D
  , 0xFD549EC3
  , 0xFD2C709D
  , 0xFD457AAE
  , 0xFd364D6D
  , 0xFD378C6D
  , 0xFD6EA748
  , 0xFd365DA4
  , 0xFD456E42
];

var backGround = 
'<RectangleForm
    left = "-1"
    top = "-1"
    width = "3073"
    height = "2305"
    fill = "0xFF000203">
</RectangleForm>';

var aGrid = 
'<LineGridShape
    left = "100"  top = "100"
    width = "2048" height = "1536"
    delta = "100" deltaH = "100"
    strokeColor="0xfF003300" strokeWidth="3">
</LineGridShape>';