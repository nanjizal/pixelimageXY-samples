package pixelimage_samples.pixelimage_canvas;

import htmlHelper.canvas.CanvasSetup;
import htmlHelper.canvas.Surface;
import pixelimage.Pixelimage;
import pixelimage.Pixelshape;
import js.html.ImageElement;
import vision.Vision;
import vision.ds.Kernal2D;
import pixelimage.formats.VisionImage;
import pixelimage.triangleGML.*;
import pixelimage.triangleGML.pattern.*;
import pixelimage.triangleGML.coreShape.TriangleGML;
import htmlHelper.tools.ImageLoader;
import pixelimage.fontImage.TestLem;
import pixelimage.fontImage.OneDfont;
import pixelimage.textureImage.TestTiger;
import pixelimage.textureImage.TestNineSlice;
import pixelimage.algo.GeomPix;

function main() new Rectangles();
class Rectangles {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        TriangleGML.withString( pixelImage, rectangleShape, 100, 100 );
        TriangleGML.withString( pixelImage, squareShape, 500, 50 );
        TriangleGML.withString( pixelImage, tileRectangleTest, 500, 400 );
        end();
    }

    function begin(){
        surface = canvasSetup.surface;
        pixelImage = new Pixelshape( 1024*4, 768*4 );
        pixelImage.transparent = true;
    }

    function end(){
        pixelImage.drawToContext( surface.me, 0, 0 );
    }

    function drawGrid(){
        pixelImage.lineGrid( 100, 100, 1024*3, 768*3, 100, 2.5, 0xfF003300 );
    }
    var rectangleShape = 
    '<RectangleShape 
        left="100" top="1000" 
        width="1000" height="500" 
        rounded="true" 
        strokeColor="0xFFFF0000" 
        strokeWidth="1" 
        fill="0xFFFF0033">
    </RectangleShape>';

// should I add rounded possibility?
var squareShape = 
    '<SquareShape 
        left="100" top="100" 
        diameter="200" 
        rounded="true"
        strokeColor="0xFFFF0000" strokeWidth="12" 
        fill="0xFFFFF200">
    </SquareShape>';
    var tileRectangleTest = 
    '<RectanglePattern 
        left="100" top="100" 
        width="600" height="400" 
        rounded="true" 
        strokeColor="0xFFFF0000" 
        strokeWidth="12" 
        fillColor0="0xFF1912F9"
        fillColor1="0xFF5CC7B3"
        strokeColor0="0xFFF1FF33"
        strokeColor1="0xFFF7287B" 
        strokePatternFill="[false,true]"
        strokePatternWidth="2"
        strokePatternHeight="2"
        strokePatternAcross="true"
        strokePatternScale="8"
        fillPatternFill="[true,true,true,true,false,false,false,false]"
        fillPatternWidth="8"
        fillPatternHeight="8"
        fillPatternAcross="true"
        fillPatternScale="8">
    </RectanglePattern>';
}