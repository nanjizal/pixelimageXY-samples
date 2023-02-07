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

function main() new Arcs();
class Arcs {

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
        // see xml definitions below
        TriangleGML.withString( pixelShape, arcPie, 10, 0 );
        TriangleGML.withString( pixelShape, arcEllipse, 10, 500 );
        TriangleGML.withString( pixelShape, arcChord, 10, 1000 );
        TriangleGML.withString( pixelShape, arcPie2, 1210, 0 );
        TriangleGML.withString( pixelShape, arcEllipse2, 1210, 500 );
        TriangleGML.withString( pixelShape, arcChord2, 1210, 1000 );

        var redFont = getOneDfont( images, 'lemRed' );
        var blueFont = getOneDfont( images, 'lemBlue' );
        var orangeFont = getOneDfont( images, 'lemOrange' );  
        drawString( 'Arc pie', redFont, 5, 800, 300 );
        drawString( 'Arc ellipse', blueFont, 5, 800, 300 + 500 );
        drawString( 'Arc chord', orangeFont, 5, 800, 300 + 1000 );

        end();
    }

    function getOneDfont( images: haxe.ds.StringMap<ImageElement>, fontName: String ): OneDfont {
        var fontSrc = Pixelimage.imageElementToPixels( images.get( fontName ) );
        return new OneDfont( fontSrc );
    }

    function drawString( str: String, font: OneDfont, scale: Int, x: Int, y: Int ){
        var pixelImg = font.drawString( str, 0, true );
        var scaled = pixelImg.scaleUpInt( scale, scale, true );
        pixelShape.putPixelImage( scaled, x, y );
    }

    function begin(){
        surface = canvasSetup.surface;
        pixelShape = new Pixelshape( 1024*4, 768*4 );
        pixelShape.transparent = true;
    }

    function end(){
        pixelShape.drawToContext( surface.me, 0, 0 );
    }

    function drawGrid(){
        pixelShape.lineGrid( 100, 100, 1024*3, 768*3, 100, 2.5, 0xfF003300 );
    }

    var arcPie = 
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF0000" strokeWidth="12" 
        fill="0xFF00FF00" 
        startAngle="0" sweepAngle="240"
        arcType="pie">
    </ArcShape>';

    var arcEllipse =
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFF0000FF" strokeWidth="12" 
        fill="0xFFFF00EE" 
        startAngle="0" sweepAngle="240"
        arcType="ellipse">
    </ArcShape>';

    var arcChord =
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF7700" strokeWidth="12" 
        fill="0xFF00A6FF" 
        startAngle="0" sweepAngle="240"
        arcType="chord">
    </ArcShape>';

    var arcPie2 = 
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF0000" strokeWidth="12" 
        fill="0xFF00FF00" 
        startAngle="120" sweepAngle="70"
        arcType="pie">
    </ArcShape>';

    var arcEllipse2 =
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFF0000FF" strokeWidth="12" 
        fill="0xFFFF00EE" 
        startAngle="-43" sweepAngle="108"
        arcType="ellipse">
    </ArcShape>';

    var arcChord2 =
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF7700" strokeWidth="12" 
        fill="0xFF00A6FF" 
        startAngle="190" sweepAngle="90"
        arcType="chord">
    </ArcShape>';
}