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

function main() new Lines();
class Lines {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        TriangleGML.withString( pixelImage, lineGradientTest );
        TriangleGML.withString( pixelImage, lineShapeTest );
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
    var lineGradientTest = 
                    '<LineGradient 
                        x1="100" y1="300" 
                        x2="300" y2="120" 
                        strokeWidth="10" 
                        colorA="0xFF0000" colorB="0xa00cc0" colorC="0x0fa00f" colorD="0x000fff">
                    </LineGradient>';

    var lineShapeTest: String = 
                    '<LineShape 
                        x2="400" y2="400" 
                        x1="420" y1="460" 
                        strokeWidth="30" strokeColor="0xffFF0000">
                    </LineShape>';
}
