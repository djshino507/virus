document.write('<link rel="stylesheet" type="text/css" href="http://www.pianored.com/popup-domination/themes/lightbox3/lightbox.css" />');var popup_domination_output = '<div class="popup-dom-lightbox-wrapper" id="popup_domination_lightbox_wrapper" style="display:none">'+'	<div class="lightbox-main lightbox-color-bright-green">'+'		<a href="#" class="lightbox-close" id="popup_domination_lightbox_close"><span>Close</span></a>'+'		<div class="lightbox-clear"></div>'+'		<div class="lightbox-grey-panel">'+'			<p class="heading">Subscr&iacute;bete para acceder a toda la informaci&oacute;n GRATIS sobre Pianos!</p>'+'			'+'			<div class="bullet-listx">'+'				<p>Contenidos GRATIS de acceso inmediato:</p>'+'				<ul class="bullet-list">					<li>Curso de Teor&iacute;a Musical GRATIS!</li>					<li>Lecciones de Piano.</li>					<li>Secretos GRATIS para tocar el piano!</li>				</ul>'+'				<div class="lightbox-clear"></div>'+'			</div>'+'		</div>'+'		'+'		<div class="lightbox-signup-panel">'+'			<p>Subscr&iacute;bete para acceder a un curso gratuito de Teor&iacute;a Musical</p>'+'            <form method="post" action="http://www.imnicamail.com/v4/hgsubscribe.php">'+'                <div>'+'                    <input type="hidden" name="FormButton_Subscribe" value="Acceder" /><input type="hidden" name="FormValue_ListID" value="1172" /><input type="hidden" name="FormValue_Command" value="Subscriber.Add" /><input type="text" class="name" value="Su Nombre..." name="FormValue_Fields[CustomField2891]" /><input type="text" class="email" value="Su e-Mail..." name="FormValue_Fields[EmailAddress]" />                    <input type="submit" value="ACCEDER AHORA!" src="http://www.pianored.com/popup-domination/themes/lightbox3/images/trans.png" class="red-button" />'+'					<p class="secure">Te mandaremos inmediatamente los datos a tu e-Mail para acceder.</p>'+'                </div>'+'            </form>'+'		</div>'+'		<div class="lightbox-clear"></div>'+'				</div>'+'</div>', popup_domination_cssurl = 'http://www.pianored.com/popup-domination/themes/lightbox3/lightbox.css';var popup_domination_defaults = {".name":"Su Nombre...",".email":"Su e-Mail..."}, popup_domination_delay = 0, popup_domination_cookie_time = 7, popup_domination_center = 'Y', popup_domination_cookie_path = '/', popup_domination_show_opt = 'open', popup_domination_unload_msg = '', popup_domination_impression_count = 0;
;(function(){
	var jquery_loaded = false, popdom_jq, timer, exit_shown = false;

    function load_jquery() {
        var j = document.createElement('script');
        j.setAttribute('id', 'popdom_jquery');
        j.setAttribute('src', 'http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js');
        j.onreadystatechange = function () {
            if (this.readyState == 'complete' || this.readyState == 'loaded') {
                if (!jquery_loaded) {
                    jquery_loaded = true;
                    popdom_jq = jQuery.noConflict(true);
                    init(popdom_jq);
                }
            }
        };
        j.onload = function () {
            if (!jquery_loaded) {
                jquery_loaded = true;
                popdom_jq = jQuery.noConflict(true);
                init(popdom_jq);
            }
        };
        document.getElementsByTagName('body')[0].appendChild(j);
    };

    function addLoadListener(fn) {
        if (typeof window.addEventListener != 'undefined') window.addEventListener('load', fn, false);
        else if (typeof document.addEventListener != 'undefined') document.addEventListener('load', fn, false);
        else if (typeof window.attachEvent != 'undefined') window.attachEvent('onload', fn);
        else {
            if (typeof window.onload != 'function') window.onload = fn;
            else {
                var oldfn = window.onload;
                window.onload = function () {
                    oldfn();
                    fn();
                };
            }
        }
    };
	
	function init($){
		function enable_unload(){
			$(window).bind('beforeunload',function(e){ 
				if(exit_shown === false){
					e = e || window.event;
					exit_shown = true;
					setTimeout(show_lightbox,1000);
					$(window).bind('unload',function(){
						close_box(false);
					});
					if(e)
						e.returnValue = popup_domination_unload_msg;
					return popup_domination_unload_msg; 
				}
			});
		};
		function window_mouseout(e){
			var mX = e.pageX, mY = e.pageY, el = $(document).find('body');
			if((mY >= 0 && mY <= el.outerHeight()) && (mX >= 0 && mX <= el.outerWidth())){
				return;
			}
			show_lightbox();
		};
		function show_lightbox(){
			$(document).unbind('focus',show_lightbox);
			$('html,body').unbind('mouseout', window_mouseout);
			if(!check_cookie()){
				max_zindex();
				$('#popup_domination_lightbox_wrapper').fadeIn('fast');
				center_it();
			}
		};
		function center_it(){
			$('.popup-dom-lightbox-wrapper .lightbox-main').css({
				position:'absolute',
				left: ($(window).width() - $('.popup-dom-lightbox-wrapper .lightbox-main').outerWidth())/2,
				top: ($(window).height() - $('.popup-dom-lightbox-wrapper .lightbox-main').outerHeight())/2
			});
		}
		function init_center(){
			center_it();
			$(window).resize(center_it);
		};
		function max_zindex(){
			var maxz = 0;
			$('body *').each(function(){
				var cur = parseInt($(this).css('z-index'));
				maxz = cur > maxz ? cur : maxz;
			});
			$('#popup_domination_lightbox_wrapper').css('z-index',maxz+10);
		};
		function close_box(fade){
			fade = fade === false ? false : true;
			var elem = $('#popup_domination_lightbox_wrapper');
			clearTimeout(timer);
			if(fade){
				elem.fadeOut('fast');
				if(popup_domination_cookie_time && popup_domination_cookie_time > 0){
					var date = new Date();
					date.setTime(date.getTime() + (popup_domination_cookie_time*86400*1000));
					set_cookie('popup_domination_hide_lightbox','Y',date);
				}
			} else {
				elem.hide();
			}
		};
		function set_cookie(name,value,date){
			window.document.cookie = [name+'='+escape(value),'expires='+date.toUTCString(),'path='+popup_domination_cookie_path].join('; ');
		};
		function check_cookie(){
			if(get_cookie('popup_domination_hide_lightbox') == 'Y')
				return true;
			return false;
		};
		function check_impressions(){
			var ic = 1, date = new Date();
			if(ic = get_cookie('popup_domination_icount')){
				ic = parseInt(ic);
				ic++;
				if(ic == popup_domination_impression_count){
					date.setTime(date.getTime());
					set_cookie('popup_domination_icount',popup_domination_impression_count,date);
					return false;
				}
			} else {
				ic = 1;
			}
			date.setTime(date.getTime() + (7200*1000));
			set_cookie('popup_domination_icount',ic,date);
			return true;
		};
		function get_cookie(cname){
			var cookie = window.document.cookie;
			if(cookie.length > 0){
				var c_start = cookie.indexOf(cname+'=');
				if(c_start !== -1){
					c_start = c_start + cname.length+1;
					var c_end = cookie.indexOf(';',c_start);
					if(c_end === -1)
						c_end = cookie.length;
					return unescape(cookie.substring(c_start,c_end));
				}
			}
			return false;
		};
		if(check_cookie()){
			return false;
		}
		if(popup_domination_impression_count > 0){
			if(check_impressions()){
				return false;
			}
		}
		$(document).find('body').prepend(popup_domination_output);
		switch(popup_domination_show_opt){
			case 'mouseleave':
				$('html,body').mouseout(window_mouseout);
				break;
			case 'unload':
				enable_unload();
				break;
			default:
				if(popup_domination_delay && popup_domination_delay > 0){
					timer = setTimeout(show_lightbox,(popup_domination_delay*1000));
				} else {
					show_lightbox();
				}
				break;
		}
		init_center();
		if(popup_domination_defaults){
			var defaults = popup_domination_defaults;
			for(var i in defaults){
				if($.trim(defaults[i]) != ''){
					$('#popup_domination_lightbox_wrapper form :text'+i)
						.data('default_value',defaults[i])
						.focus(function(){
							var $this = $(this);
							if($this.val() == $this.data('default_value'))
								$this.val('');
						}).blur(function(){
							var $this = $(this);
							if($this.val() == '')
								$this.val($this.data('default_value'));
						});
				}
			}
		}
		$('#popup_domination_lightbox_close').click(function(){
			close_box();
			return false;
		});
		$('#popup_domination_lightbox_wrapper form').submit(function(){
			var checked = true;
			$('#popup_domination_lightbox_wrapper :text').each(function(){
				var $this = $(this), val = $this.val();
				if($this.data('default_value') && val == $this.data('default_value')){
					if(checked)
						$this.val('').focus();
					checked = false;
				}
				if(val == ''){
					checked = false;
				}
			});
			if(checked){
				close_box();
				return true;
			}
			return false;
		});
	};
	
    addLoadListener(function () {
        if (typeof jQuery == 'undefined') {
            load_jquery();
        } else {
			if(jQuery.fn.jquery < '1.3.2'){
				load_jquery();
			} else {
	            init(jQuery);
			}
        }
    });
})();