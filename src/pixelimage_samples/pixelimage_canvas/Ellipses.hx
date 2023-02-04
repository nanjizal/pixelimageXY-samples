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
import pixelimage.triangleGML.*;
import pixelimage.triangleGML.pattern.*;
import pixelimage.triangleGML.coreShape.TriangleGML;
import htmlHelper.tools.ImageLoader;
import pixelimage.fontImage.TestLem;
import pixelimage.fontImage.OneDfont;
import pixelimage.textureImage.TestTiger;
import pixelimage.textureImage.TestNineSlice;
import pixelimage.algo.GeomPix;

function main() new Ellipses();
class Ellipses {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        TriangleGML.withString( pixelImage, ellipseTest );
        TriangleGML.withString( pixelImage, circleTest );
        TriangleGML.withString( pixelImage, softEllipseTest );
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
    var ellipseTest =  
                    '<EllipseShape 
                        top="100" 
                        width="200" 
                        height="50" 
                        strokeColor="0xFF0000" strokeWidth="1" 
                        fill="0xFF00FF00">
                    </EllipseShape>';
    var circleTest: String = 
                    '<CircleShape 
                        left="200" top="200" 
                        diameter="300" 
                        strokeColor="0xFFFF0000" strokeWidth="10" 
                        fill="0xFF00FF00">
                    </CircleShape>';
    var softEllipseTest: String = 
                    '<SoftEllipseShape 
                        left="500" top="500" 
                        width="400" 
                        height="400" 
                        strokeColor="0xFFFF0000"
                        softC="10">
                    </SoftEllipseShape>';
}