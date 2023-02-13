package pixelimage_samples.pixelimage_nme;

import flash.display.Sprite;
import flash.events.Event;
import flash.display.Graphics;
import flash.display.BitmapData;

import pixelimage.Pixelimage;
import pixelimage.Pixelshape;

import pixelimage.triangleGML.*;
import pixelimage.triangleGML.pattern.*;
import pixelimage.triangleGML.coreShape.TriangleGML;
import pixelimage.algo.GeomPix;

function main(): Void { Lib.current.addChild( new Grid() ); }
class Grid extends Sprite {
    
    var viewSprite: Sprite;
    var pixelImage: Pixelshape;

    public function new(){
        super();
        
        var current = Lib.current;
        var stage = current.stage;
        viewSprite = new Sprite();
        var g = viewSprite.graphics;
        addChild( viewSprite );

        pixelImage = new Pixelshape( 1024, 768 );
        pixelImage.transparent = true;
        pixelImage.simpleRect( 0, 0, pixelImage.width, pixelImage.height, 0xFF000000 );
        TriangleGML.withString( pixelImage, lineGridShape );
        TriangleGML.withString( pixelShape, arcPie, 10, 0 );
        var bitmapData = toNmeBitmapData( pixelShape );
        var bitmap = new Bitmap (bitmapData);
		addChild(bitmap);

        current.graphics.beginFill(0xFFFFFF, 1. );
        current.graphics.drawRect( 0., 0., 70., 40. );
        current.graphics.endFill();
        current.addChild( new nme.display.FPS() );
    }

    var lineGridShape = 
    '<LineGridShape
        left = "100"  top = "100"
        width = "1024" height = "768"
        delta = "100" deltaH = "100"
        strokeColor="0xfF003300" strokeWidth="3">
    </LineGridShape>';

    var arcPie = 
    '<ArcShape 
        left="100"  top="100" 
        width="500" height="480" 
        strokeColor="0xFFFF0000" strokeWidth="12" 
        fill="0xFF00FF00" 
        startAngle="0" sweepAngle="240"
        arcType="pie">
    </ArcShape>';
}