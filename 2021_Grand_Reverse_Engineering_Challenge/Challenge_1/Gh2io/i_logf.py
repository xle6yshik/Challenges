import logging


class Logf(object):

    def __init__(self,
                 p_path):
        if p_path and p_path.strip():  # if not isBlank(p_path)
            l_log = p_path.strip()
            logging.basicConfig(format=u'%(filename)s[LINE:%(lineno)d]# %(levelname)-8s [%(asctime)s] %(message)s',
                                level=logging.DEBUG,
                                filename=l_log)
        else:
            logging.basicConfig(format=u'%(filename)s[LINE:%(lineno)d]# %(levelname)-8s [%(asctime)s] %(message)s',
                                level=logging.DEBUG)
            l_log = 'stdout'
        logging.debug(u'Open log to: {}'.format(l_log))
