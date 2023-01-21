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

function main() new Arrows();
class Arrows {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // see xml definitions below
        XMLshape.withString( pixelImage, arrowShapeTest );
        XMLshape.withString( pixelImage, arrowThickGradientTest ); 
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

    var arrowShapeTest: String = 
                    '<ArrowShape
                        flare="true"
                        both="true"
                        x1="100" y1="300" 
                        x2="360" y2="120" 
                        arrowWidth="60"
                        arrowHeight="50"
                        strokeWidth="5" strokeColor="0xffFF0000">
                    </ArrowShape>';
    var arrowThickGradientTest: String = 
                    '<ArrowThickGradient
                        flare="true"
                        reverseFlare="true"
                        both="true"
                        x1="100" y1="300" 
                        x2="360" y2="120" 
                        arrowWidth="60"
                        arrowHeight="50"
                        strokeWidth="5" strokeTopColor="0xFF9000FF" strokeBottomColor="0xffffa200">
                    </ArrowThickGradient>';

}