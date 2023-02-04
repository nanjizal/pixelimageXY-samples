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

function main() new Quints();
class Quints {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        // see xml definitions below
        draw([
            lineGridShape
          , quintShape
          , quadShape
      ]);
        end();
    }

    function begin(){
        surface = canvasSetup.surface;
        pixelImage = new Pixelshape( 1024*4, 768*4 );
        pixelImage.transparent = true;
    }
    function draw( triangleGMLs: Array<String> ){
        for( shapeString in triangleGMLs ) TriangleGML.withString( pixelImage, shapeString );
    }
    function end(){
        pixelImage.drawToContext( surface.me, 0, 0 );
    }
    var quintShape = 
    '<QuintShape 
        aX="100" aY="300" 
        bX="130" bY="220"
        cX="300" cY="120"
        dX="500" dY="500" 
        strokeColor="0xFF2600FF"
        softC="3">
    </QuintShape>';
    var quadShape = 
    '<QuadShape 
        aX="500" aY="300" 
        bX="530" bY="220"
        cX="700" cY="120"
        dX="900" dY="500" 
        strokeColor="0xFF2600FF">
    </QuadShape>';
    var lineGridShape = 
    '<LineGridShape
        left = "100"  top = "100"
        width = "2048" height = "1536"
        delta = "100" deltaH = "100"
        strokeColor="0xfF003300" strokeWidth="2.5">
    </LineGridShape>';
}