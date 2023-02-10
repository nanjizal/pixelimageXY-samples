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

function main() new Quads();
class Quads {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        TriangleGML.withString( pixelImage, quadShape );
        var trigml = TriangleGML.withString( pixelImage, quadShapeSoft, 340, 5 );
        TriangleGML.withString( pixelImage, quadShapeLuxury, 340, 500 ); 
        //trigml.shapes[0].clear( pixelImage, 0xFF000000 ); 
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
    var quadShapeSoft = 
    '<QuadShape 
    aX="500" aY="300" 
    bX="530" bY="220"
    cX="700" cY="120"
    dX="900" dY="500" 
    soft="90"
    strokeColor="0xFFFF0000" strokeWidth="1"> 
    </QuadShape>';
    var quadShape = '<QuadShape 
    aX="500" aY="300" 
    bX="530" bY="220"
    cX="700" cY="120"
    dX="900" dY="500" 
    strokeColor="0xFFFF0000" strokeWidth="1">
    </QuadShape>';
    var quadShapeLuxury = 
    '<QuadShape 
    aX="500" aY="300" 
    bX="530" bY="220"
    cX="700" cY="120"
    dX="900" dY="500" 
    soft="90"
    luxury="true"
    strokeColor="0xFFFF0000" strokeWidth="1"> 
    </QuadShape>';
}