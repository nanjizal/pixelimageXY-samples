package pixelimage_samples.pixelimage_canvas;

import htmlHelper.canvas.CanvasSetup;
import htmlHelper.canvas.Surface;

import pixelimageXY.Pixelshape;
import pixelimageXY.triangleGML.TriangleGML;

function main() new Template();
class Template {
    var canvasSetup = new CanvasSetup();
    public function new(){
        var surface = canvasSetup.surface;
        var pixelShape = new Pixelshape( 1024*4, 768*4 );
        pixelShape.transparent = true;
        var parser = new TriangleGML( pixelShape );
        parser.addShape( backGround, 10, 10 );
        parser.addShape( aGrid,      10, 10 );
        parser.renderPromise().then(
            ( _ ) -> pixelShape.drawToContext( surface.me, 0, 0 )
        );
    }
}

var backGround = 
'<RectangleForm
    left = "-1"
    top = "-1"
    width = "3073"
    height = "2305"
    fill = "0xFF000203">
</RectangleForm>';

var aGrid = 
'<LineGridShape
    left = "100"  top = "100"
    width = "2048" height = "1536"
    delta = "100" deltaH = "100"
    strokeColor="0xfF003300" strokeWidth="3">
</LineGridShape>';