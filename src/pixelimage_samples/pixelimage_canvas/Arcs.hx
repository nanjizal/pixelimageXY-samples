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

function main() new Arcs();
class Arcs {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        XMLshape.withString( pixelImage, ellipseArcTest );
        XMLshape.withString( pixelImage, arcTest );
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
    var ellipseArcTest = 
    '<EllipseArcTest 
        left="100"  top="100" 
        width="200" height="50" 
        strokeColor="0xFF0000" strokeWidth="1" 
        fill="0xFF00FF00" 
        startAngle="10" sweepAngle="90">
    </EllipseArcTest>';

    var arcTest = 
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF0000" strokeWidth="5" 
        fill="0xFF00FF00" 
        startAngle="0" sweepAngle="240"
        arcType="pie"></ArcShape>';
}