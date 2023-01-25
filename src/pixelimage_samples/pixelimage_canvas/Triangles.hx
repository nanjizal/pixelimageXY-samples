package pixelimage_samples.pixelimage_canvas;

import htmlHelper.canvas.CanvasSetup;
import htmlHelper.canvas.Surface;
import pixelimage.Pixelimage;
import pixelimage.Pixelshape;
import js.html.ImageElement;
import vision.Vision;
import vision.ds.Kernal2D;
import pixelimage.formats.VisionImage;
import pixelimage.triGML.*;
import pixelimage.triGML.pattern.*;
import pixelimage.triGML.coreShape.XMLshape;
import pixelimage.triGML.coreShape.XMLshapeSamples;
import htmlHelper.tools.ImageLoader;
import pixelimage.fontImage.TestLem;
import pixelimage.fontImage.OneDfont;
import pixelimage.textureImage.TestTiger;
import pixelimage.textureImage.TestNineSlice;
import pixelimage.algo.GeomPix;

function main() new Triangles();
class Triangles {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        XMLshape.withString( pixelImage, tileRectangleTest );
        XMLshape.withString( pixelImage, triangleGradientTest );
        XMLshape.withString( pixelImage, triangleShape );
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
// no border pattern
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
var triangleGradientTest: String = 
                    '<TriangleGradient 
                        aX="100" aY="100" 
                        bX="200" bY="150" 
                        cX="130" cY="220" 
                        colorA="0xffFF0000" colorB="0xff0f00ff" colorC="0xffcc00cc">
                    </TriangleGradient>';

var triangleShape = 
                    '<TriangleShape 
                        x1="100" y1="100" 
                        x2="200" y2="150" 
                        x3="130" y3="220" 
                        strokeColor="0xFF0000" strokeWidth="1" 
                        fill="0xFF00FF00">
                    </TriangleShape>';

}