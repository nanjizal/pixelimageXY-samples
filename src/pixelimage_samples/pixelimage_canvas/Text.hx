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

    var imageLoader: ImageLoader;

    // main pixelimage instance
    var pixelShape: Pixelshape;

    public function new(){
        imageLoader = new ImageLoader( [], setup );
        imageLoader.loadEncoded( [ lemBlue(), lemRed(), lemYellow(), lemCyan(), lemPurple(), lemOrange(), lemGreen() ]
                                , [ 'lemBlue', 'lemRed', 'lemYellow', 'lemCyan', 'lemPurple', 'lemOrange', 'lemGreen' ] );
    }
    function setup(){
        var images: haxe.ds.StringMap<ImageElement> = imageLoader.images;
        begin();
        drawGrid();
        var pixelFontSrc = Pixelimage.imageElementToPixels( images.get( 'lemRed' ) );
        var piFont = new OneDfont( pixelFontSrc );
        var helloPixel = piFont.drawString( 'Hello pixelimage!', 0, true ); 
        var scaled = helloPixel.scaleUpInt( 10, 12, true );
        var rotated = scaled.rotateClockwiseDegrees( 3, 0, 0, true );
        pixelShape.putPixelImage( rotated, 100, 100 );
        end();
    }
    function begin(){
        surface = canvasSetup.surface;
        pixelShape = new Pixelshape( 1024*4, 768*4 );
        pixelShape.transparent = true;
    }
    function draw( triangleGMLs: Array<String> ){
        for( shapeString in triangleGMLs ) TriangleGML.withString( pixelShape, shapeString );
    }
    function end(){
        pixelShape.drawToContext( surface.me, 0, 0 );
    }

    function drawGrid(){
        pixelShape.lineGrid( 100, 100, 1024*3, 768*3, 100, 2.5, 0xfF003300 );
    }
}