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
        TriangleGML.withString( pixelImage, triangleGradientTest );
        TriangleGML.withString( pixelImage, triangleShape );
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