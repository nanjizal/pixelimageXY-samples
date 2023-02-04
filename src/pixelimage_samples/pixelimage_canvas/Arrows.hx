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

function main() new Arrows();
class Arrows {

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
            , arrowShapeTest
            , arrowShapeReverseFlareTest
            , arrowShapeFlareTest
            , arrowThickGradientTest
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

    function drawGrid(){
        pixelImage.lineGrid( 100, 100, 1024*3, 768*3, 100, 2.5, 0xfF003300 );
    }
    var arrowShapeTest: String = 
                    '<ArrowShape
                        both="false"
                        x1="500" y1="400" 
                        x2="890" y2="230" 
                        arrowWidth="70"
                        strokeWidth="30" strokeColor="0xff0000FF">
                    </ArrowShape>';
    var arrowShapeReverseFlareTest: String = 
                    '<ArrowShape
                        flare="true"
                        both="false"
                        reverseFlare="true"
                        x1="100" y1="300" 
                        x2="360" y2="120" 
                        arrowWidth="60"
                        arrowHeight="50"
                        soft="10."
                        strokeWidth="5" strokeColor="0xffFF0000">
                    </ArrowShape>';
    var arrowShapeFlareTest: String = 
                    '<ArrowShape
                        flare="true"
                        both="false"
                        x1="400" y1="400" 
                        x2="560" y2="720" 
                        arrowWidth="60"
                        arrowHeight="50"
                        soft="10."
                        strokeWidth="5" strokeColor="0xff00FF00">
                    </ArrowShape>';
    var arrowThickGradientTest: String = 
                    '<ArrowThickGradient
                        flare="true"
                        reverseFlare="true"
                        both="true"
                        x1="300" y1="300" 
                        x2="560" y2="120" 
                        arrowWidth="60"
                        arrowHeight="50"
                        strokeWidth="5" strokeTopColor="0xFF9000FF" strokeBottomColor="0xffffa200">
                    </ArrowThickGradient>';
    var lineGridShape = 
                    '<LineGridShape
                        left = "100"  top = "100"
                        width = "2048" height = "1536"
                        delta = "100" deltaH = "100"
                        strokeColor="0xfF003300" strokeWidth="2.5">
                    </LineGridShape>';
}