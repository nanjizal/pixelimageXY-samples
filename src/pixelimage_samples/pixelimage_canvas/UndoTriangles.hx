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

function main() new UndoTriangles();
class UndoTriangles {

    // htmlHelper requirements
    var canvasSetup = new CanvasSetup();
    var surface :   Surface; 

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        drawGrid();
        // test1
        var hits = drawAlphaTrianglePink( pixelImage );
        var hit4 = hits[4];
        var hit3 = hits[3];
        pixelImage.transparent = false;
        for( y in 0...hit3.undoImage.height ){
            for( x in 0...hit3.undoImage.width ){
                if( hit3.hit( x+hit3.undoX, y+hit3.undoY ) ){
                    var col = hit3.undoImage.getPixel( x, y );
                    if( col != 0 ) {
                        pixelImage.setARGB( x+hit3.undoX, y+hit3.undoY, col );
                        pixelImage.transparent = true;
                        if( hit4.hit( x+hit3.undoX, y+hit3.undoY ) ){
                            pixelImage.setARGB( x+hit3.undoX, y+hit3.undoY, 0xeeF000c0 );
                        }
                        pixelImage.transparent = false;
                    } else {
                        pixelImage.zeroPixel( x+hit3.undoX, y+hit3.undoY );
                        pixelImage.transparent = true;
                        if( hit4.hit( x+hit3.undoX, y+hit3.undoY ) ){
                            pixelImage.setARGB( x+hit3.undoX, y+hit3.undoY, 0xeeF000c0 );
                        }
                        pixelImage.transparent = false;
                    }
                }
            }
        }
        pixelImage.transparent = true;
        // test 2
        var hits = drawAlphaTriangleCyan( pixelImage );
        var hit4 = hits[4];
        var hit3 = hits[3];
        pixelImage.transparent = false;
        pixelImage.putPixelImage( hit4.undoImage, hit4.undoX, hit4.undoY, false, true );
        pixelImage.putPixelImage( hit3.undoImage, hit3.undoX, hit3.undoY, false, true );
        pixelImage.transparent = true;
        var gap = 200*4;
        pixelImage.fillTri( 100 + gap, 900-400
            , 300 + gap, 1200-400
            , 500 + gap, 1000-400
            , 0xee00c0F0, true, true );
        
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
    public function drawAlphaTrianglePink( p: Pixelshape ){
        var a = [ 0x33F000c0
                , 0x99F000c0
                , 0xaaF000c0
                , 0xccF000c0
                , 0xeeF000c0];
        var gap = 200;
        var out = [];
        for( i in 0...5 ){
            out.push( p.fillTri( 100 + i*gap, 900
                     , 300 + i*gap, 1200
                     , 500 + i*gap, 1000
                     , a[i], true, true ) );
        }
        return out;
   }
   public function drawAlphaTriangleCyan( p: Pixelshape ){
    var a = [ 0x3300c0F0
            , 0x9900c0F0
            , 0xaa00c0F0
            , 0xcc00c0F0
            , 0xee00c0F0];
    var gap = 200;
    var out = [];
    for( i in 0...5 ){
        out.push( p.fillTri( 100 + i*gap, 900-400
                 , 300 + i*gap, 1200-400
                 , 500 + i*gap, 1000-400
                 , a[i], true, true ) );
    }
    return out;
}
}