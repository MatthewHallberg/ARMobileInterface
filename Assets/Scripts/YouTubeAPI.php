<?php
/*
Made by [egy.js](https://www.instagram.com/egy.js/);
*/
header('Access-Control-Allow-Origin: *');  
header('Content-Type: application/json');
if(isset($_GET['url']) && $_GET['url'] != ""){
    parse_str( parse_url( $_GET['url'], PHP_URL_QUERY ), $vars );
    
    $id=$vars['v'];
    $dt=file_get_contents("http://www.youtube.com/get_video_info?video_id=$id&el=embedded&ps=default&eurl=&gl=US&hl=en");
    //var_dump(explode("&",$dt));
    if (strpos($dt, 'status=fail') !== false) {
        
        $x=explode("&",$dt);
        $t=array(); $g=array(); $h=array();
        foreach($x as $r){
            $c=explode("=",$r);
            $n=$c[0]; $v=$c[1];
            $y=urldecode($v);
            $t[$n]=$v;
        }
            $x=explode("&",$dt);
            foreach($x as $r){
                $c=explode("=",$r);
                $n=$c[0]; $v=$c[1];
                $h[$n]=urldecode($v);
            }
            $g[]=$h;
            $g[0]['error'] = true;
            $g[0]['instagram'] = "egy.js";
            $g[0]['apiMadeBy'] = 'El-zahaby';
        echo json_encode($g,JSON_PRETTY_PRINT);
        
    }else{
        
        $x=explode("&",$dt);
        $t=array(); $g=array(); $h=array();
        foreach($x as $r){
            $c=explode("=",$r);
            $n=$c[0]; $v=$c[1];
            $y=urldecode($v);
            $t[$n]=$v;
        }
        $streams = explode(',',urldecode($t['url_encoded_fmt_stream_map']));
        foreach($streams as $dt){ 
            $x=explode("&",$dt);
            foreach($x as $r){
                $c=explode("=",$r);
                $n=$c[0]; $v=$c[1];
                $h[$n]=urldecode($v);
            }
            $g[]=$h;
        }
        echo json_encode($g,JSON_PRETTY_PRINT);
       // var_dump( $g[1]["quality"],true);
    }
}else{
    @$myObj->error = true;
    $myObj->msg = "there is no youtube link";
    
    $myObj->madeBy = "El-zahaby";
    $myObj->instagram = "egy.js";
    $myJSON = json_encode($myObj,JSON_PRETTY_PRINT);
    echo $myJSON;
}